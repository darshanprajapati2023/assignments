// Import required modules
const { MongoClient, ObjectId } = require('mongodb');

// Connection URL and Database Name
const url = 'mongodb://localhost:27017';
const dbName = 'Online_Shopping_App';

// Create a new MongoClient
const client = new MongoClient(url, { useNewUrlParser: true, useUnifiedTopology: true });

async function deleteDocumentAndCollection() {
    try {
        // Connect to MongoDB
        await client.connect();
        console.log('Connected successfully to server');

        const db = client.db(dbName);

        // Delete a particular document
        await db.collection('Products').deleteOne({ _id: new ObjectId('661821c173b834ff937a3a1e') });

        // Delete an entire collection
        await db.collection('Product_category').drop();

        console.log('Document and collection deleted successfully');
    } catch (error) {
        console.error('Error:', error);
    } finally {
        // Close the client
        await client.close();
    }
}

// Usage
deleteDocumentAndCollection();
