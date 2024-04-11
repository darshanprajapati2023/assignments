require('dotenv').config()

const util = require('./utils')

const libExpress = require('express')

const libBodyParser = require('body-parser')

const ObjectId = require('mongodb').ObjectId


const app = libExpress()


//Middleware
app.use(libBodyParser.json())


//Get all products
app.get("/products", (req, res, next) => {

    util.getDbConnection(function (dbConn) {

        if (dbConn == false) {
            res.status(200).json({ error: "Failed to connect DB" })
        } else {
            dbConn.collection("Products").find().toArray().then(
                (productData) => res.status(200).json(productData)
            ).catch(
                (e) => res.status(200).json({ error: e })
            )
        }
    })
})


//POST a new product
app.post("/products", (req, res, next) => {


    util.getDbConnection(function (db) {

        if (db) {
            db.collection("Products").insertOne(req.body)
                .then((productData) => res.status(202).json({ data: productData }))
                .catch(e => res.status(500).json({ error: "Internal Server Error - Failed To Delete Task" }))
        } else {
            res.status(500).json({ error: "Internal Server Error" })
        }
    })
})


//DELETE a product
app.delete('/products/:id', (req, res, next) => {


    util.getDbConnection(function (db) {

        if (db) {
            db.collection("Products").deleteOne({ "_id": new ObjectId(req.params.id) })
                .then((productData) => res.status(202).json({ data: productData }))
                .catch(e => res.status(500).json({ error: "Internal Server Error - Failed To Delete Task" }))
        } else {
            res.status(500).json({ error: "Internal Server Error" })
        }
    })
})

// PUT (replace) a product
app.put('/products/:id', (req, res, next) => {

    util.getDbConnection(function (db) {

        if (!db) {
            res.status(500).json({ error: 'Failed to connect to database' });

        } else {
            db.collection("Products").replaceOne({ "_id": req.params.id }, req.body)
                .then((status) => res.status(202).json({ data: status }))
                .catch(e => res.status(500).json({
                    error: "Internal Server Error - Failed To patch Task" + e
                }))
        }
    })
})


// PATCH (update) a product
app.patch('/products/:id', (req, res, next) => {

    util.getDbConnection(function (db) {

        if (!db) {
            res.status(500).json({ error: 'Failed to connect to database' });

        } else {

            db.collection("Products").updateOne({ "_id": req.params.id }, { $set: req.body })
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