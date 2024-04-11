require('dotenv').config()

const util = require('./utils')

const libExpress = require('express')

const bodyParser = require('body-parser')

const ObjectId = require('mongodb').ObjectId

const app = libExpress()

//Middleware
app.use(bodyParser.json());


//GET all tasks
app.get("/tasks", (req, res, next) => {
    util.getDbConnection(function (dbConn) {

        if (dbConn == false) {
            res.status(200).json({ error: "Failed to connect DB" })
        } else {
            dbConn.collection("tasks").find().toArray().then(
                (taskData) => res.status(200).json(taskData)
            ).catch(
                (e) => res.status(200).json({ error: e })
            )
        }

    })
})

//POST a new task
app.post("/tasks", (req, res, next) => {


    util.getDbConnection(function (db) {

        if (db) {
            db.collection("tasks").insertOne(req.body)
                .then((taskData) => res.status(202).json({ data: taskData }))
                .catch(e => res.status(500).json({ error: "Internal Server Error - Failed To Delete Task" }))
        } else {
            res.status(500).json({ error: "Internal Server Error" })
        }
    })
})


//DELETE a task
app.delete('/tasks/:id', (req, res, next) => {


    util.getDbConnection(function (db) {

        if (db) {
            db.collection("tasks").deleteOne({ "_id": new ObjectId(req.params.id) })
                .then((taskData) => res.status(202).json({ data: taskData }))
                .catch(e => res.status(500).json({ error: "Internal Server Error - Failed To Delete Task" }))
        } else {
            res.status(500).json({ error: "Internal Server Error" })
        }
    })
})

// PUT (replace) a task
app.put('/tasks/:id', (req, res, next) => {

    util.getDbConnection(function (db) {

        if (!db) {
            res.status(500).json({ error: 'Failed to connect to database' });

        } else {
            db.collection("tasks").replaceOne({ "_id": req.params.id }, req.body)
                .then((status) => res.status(202).json({ data: status }))
                .catch(e => res.status(500).json({
                    error: "Internal Server Error - Failed To patch Task" + e
                }))
        }
    })
})


// PATCH (update) a task
app.patch('/tasks/:id', (req, res, next) => {

    util.getDbConnection(function (db) {

        if (!db) {
            res.status(500).json({ error: 'Failed to connect to database' });
        } else {

            db.collection("tasks").updateOne({ "_id": req.params.id }, { $set: req.body })
                .then((taskData) => res.status(202).json({ data: taskData }))
                .catch(e => res.status(500).json({
                    error: "Internal Server Error - Failed To put Task"
                }))
        }
    })
})

app.listen(process.env.APP_PORT, () => {

    console.log(`Server is listening at ${process.env.APP_PORT}`, "success")

})