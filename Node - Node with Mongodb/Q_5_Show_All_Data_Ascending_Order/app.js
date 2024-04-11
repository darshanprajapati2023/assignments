const MongoClient = require('mongodb').MongoClient;

// Connection URL
const url = 'mongodb://localhost:27017';

// Database Name
const dbName = 'Online_Shopping_App';

// Create a new MongoClient
const client = new MongoClient(url, { useNewUrlParser: true, useUnifiedTopology: true });

// Use connect method to connect to the Server
client.connect(function (err) {
    if (err) {
        console.error('Failed to connect to the database:', err);
        return;
    }

    console.log('Connected successfully to server');

    const db = client.db(dbName);
    const collection = db.collection('Products');

    // Find all documents in the collection and sort them in ascending order
    collection.find({}).sort({ name: 1 }).toArray(function (err, docs) {
        if (err) {
            console.error('Error fetching documents:', err);
            return;
        }

        console.log('name:');
        console.log(docs);

        // Close the connection
        client.close();
    });
});