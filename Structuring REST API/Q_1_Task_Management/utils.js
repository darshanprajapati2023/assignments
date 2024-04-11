const MongoClient = require('mongodb').MongoClient


const util = {}


util.getDbConnection = (callbackFunction) => {

    MongoClient.connect(process.env.MONGO_URL).then((dbConnection) => {

        callbackFunction(dbConnection.db(process.env.MONGO_DB))
    }).catch((e) => {
        console.log(e)
    })
}


module.exports = util