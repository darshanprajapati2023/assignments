const { MongoClient } = require('mongodb');

// Connection URI
const uri = 'mongodb://localhost:27017';

// Database Name
const dbName = 'online_shopping';

// Sample data for each collection
const usersData = [
    { username: 'user1', email: 'user1@example.com', password: 'password1' },
    { username: 'user2', email: 'user2@example.com', password: 'password2' },
];

const productCategoriesData = [
    { name: 'Electronics', description: 'Electronic gadgets and devices' },
    { name: 'Clothing', description: 'Clothing and fashion accessories' },
];

const productsData = [
    { name: 'Laptop', category: 'Electronics', price: 999.99, description: 'A powerful laptop for all your computing needs' },
    { name: 'T-Shirt', category: 'Clothing', price: 19.99, description: 'Comfortable cotton t-shirt available in various colors' },
];

const ordersData = [
    { user: 'user1', products: ['Laptop'], totalPrice: 999.99, status: 'Delivered' },
    { user: 'user2', products: ['T-Shirt'], totalPrice: 19.99, status: 'Pending' },
];

const reviewsData = [
    { user: 'user1', product: 'Laptop', rating: 5, comment: 'Great product, fast delivery!' },
    { user: 'user2', product: 'T-Shirt', rating: 4, comment: 'Nice quality, but took a bit long to arrive' },
];

// Create a new MongoClient
const client = new MongoClient(uri, { useNewUrlParser: true, useUnifiedTopology: true });

async function main() {
    try {
        // Connect to the MongoDB server
        await client.connect();
        console.log('Connected to the database');

        // Get the database reference
        const db = client.db(dbName);

        // Insert sample data into User collection
        await db.collection('users').insertMany(usersData);
        console.log('Inserted sample data into User collection');

        // Insert sample data into Product Category collection
        await db.collection('productCategories').insertMany(productCategoriesData);
        console.log('Inserted sample data into Product Category collection');

        // Insert sample data into Product collection
        await db.collection('products').insertMany(productsData);
        console.log('Inserted sample data into Product collection');

        // Insert sample data into Order collection
        await db.collection('orders').insertMany(ordersData);
        console.log('Inserted sample data into Order collection');

        // Insert sample data into Review collection
        await db.collection('reviews').insertMany(reviewsData);
        console.log('Inserted sample data into Review collection');
    } catch (error) {
        console.error('Error occurred:', error);
    } finally {
        // Close the connection
        await client.close();
        console.log('Connection closed');
    }
}

// Run the main function
main();
