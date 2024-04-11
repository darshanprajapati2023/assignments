// Import required modules
const { MongoClient, ObjectId } = require('mongodb');

// Connection URL and Database Name
const url = 'mongodb://localhost:27017';
const dbName = 'Online_Shopping_App';

// Create a new MongoClient
const client = new MongoClient(url, { useNewUrlParser: true, useUnifiedTopology: true });

async function updateProductPrice(productId, newPrice) {
    try {
        // Connect to MongoDB
        await client.connect();
        console.log('Connected successfully to server');

        const db = client.db(dbName);
        const collection = db.collection('Products');

        // Define the filter to find the particular product
        const filter = { _id: new ObjectId('6616a6579b0b0cb4d6dac0c9') }; // Replace 'productId' with the actual product ID

        // Define the update operation
        const update = { $set: { price: ('1000') } }; // Replace 'newPrice' with the new price

        // Perform the update operation
        const result = await collection.updateOne(filter, update);
        console.log(`${result.modifiedCount} document(s) updated`);
    } catch (error) {
        console.error('Error updating document:', error);
    } finally {
        // Close the client
        await client.close();
    }
}

// Usage
const productId = '6616a6579b0b0cb4d6dac0c9'; // Replace with the actual product ID
const newPrice = 1000; // Replace with the new price
updateProductPrice(productId, newPrice);