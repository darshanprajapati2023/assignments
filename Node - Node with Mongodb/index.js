function openNav() {
    document.getElementById('sidebar').style.left = '0';
}

function closeNav() {
    document.getElementById('sidebar').style.left = '-250px';
}

function loadPage(page) {
    const contentDiv = document.getElementById('content');
    let content = '';

    switch (page) {
        case 'Q_1:Ans:1':
            content = `
        <h1>Q_1_What is MongoDB.</h1>
        <p>MongoDB is a popular open-source NoSQL database program. It uses a document-oriented data model, which means it stores data in flexible, JSON-like documents, rather than traditional table-based relational databases. MongoDB is designed for scalability, performance, and high availability, making it well-suited for modern web applications and other use cases where flexibility and scalability are important.</p>
        <p>Some key features of MongoDB include:</p>
        <p>&#9658;&nbsp;<b>Document-Oriented:</b> Data is stored in flexible, JSON-like documents. Each document can have a different structure, allowing for easy schema evolution.</p>
        <p>&#9658;&nbsp;<b>Scalability:</b> MongoDB can scale out horizontally by distributing data across multiple servers, allowing for high availability and performance as data volumes increase.</p>
        <p>&#9658;&nbsp;<b>High Performance:</b> MongoDB is designed for high throughput and low latency, making it suitable for real-time applications.</p>
        <p>&#9658;&nbsp;<b>Rich Query Language:</b> MongoDB supports a rich query language with support for ad-hoc queries, indexing, and aggregation.</p>
        <p>&#9658;&nbsp;<b>Indexing:</b> MongoDB supports secondary indexes, including compound indexes and geospatial indexes, to optimize query performance.</p>
        <p>&#9658;&nbsp;<b>Replication:</b> MongoDB supports automatic failover and data redundancy through replication, ensuring data durability and high availability.</p>
        <p>&#9658;&nbsp;<b>Sharding: MongoDB supports horizontal scaling through sharding, allowing data to be distributed across multiple shards for improved performance and scalability.</p>
        <p>Overall, MongoDB is widely used in modern web development, big data, and real-time analytics applications due to its flexibility, scalability, and performance characteristics.</p>

      `;
            break;
        case 'Q_2:Ans:2':
            content = `
        <h1>Q_2_What is difference between mongo DB and SQL</h1>
        <p>MongoDB and SQL (Structured Query Language) databases, typically referring to relational databases like MySQL, PostgreSQL, or SQL Server, have several key differences:</p>
        <p><b>Data Model:</b></p>
        <p>&#9658;&nbsp;MongoDB: MongoDB uses a document-oriented data model. Data is stored in flexible, JSON-like documents, allowing for nested data structures and dynamic schemas.</p>
        <p>&#9658;&nbsp;SQL: SQL databases use a table-based data model where data is stored in rows and columns. Each table has a predefined schema with fixed columns.</p>
        <p><b>Schema:</b></p>
        <p>&#9658;&nbsp;MongoDB: MongoDB has a dynamic schema, meaning documents in the same collection can have different structures. Fields can be added or removed without affecting other documents in the collection.</p>
        <p>&#9658;&nbsp;SQL: SQL databases have a rigid schema. Tables must adhere to a predefined schema, and altering the schema (adding or removing columns) can be complex and may require downtime.</p>
        <p><b>Query Language:</b></p>
        <p>&#9658;&nbsp;MongoDB: MongoDB uses a query language based on JSON-like documents. It supports a rich set of query operators for searching, filtering, and updating documents.</p>
        <p>&#9658;&nbsp;SQL: SQL databases use the SQL language for querying data. SQL offers powerful querying capabilities with features like joins, group by, and aggregate functions.</p>
        <p><b>Scaling:</b><p>
        <p>&#9658;&nbsp;MongoDB: MongoDB is designed for horizontal scalability through sharding, which distributes data across multiple servers. This allows MongoDB to handle large volumes of data and high throughput.</p>
        <p>&#9658;&nbsp;SQL: SQL databases typically scale vertically by adding more resources (CPU, memory, storage) to a single server. While some SQL databases support sharding, it's often more complex to implement compared to MongoDB.</p>
        <p><b>Transactions:</b></p>
        <p>&#9658;&nbsp;MongoDB: MongoDB introduced multi-document ACID transactions in recent versions, allowing for atomic operations across multiple documents within a single transaction.</p>
        <p>&#9658;&nbsp;SQL: SQL databases have traditionally supported transactions, ensuring data consistency and integrity through features like commit and rollback.</p>
        <p><b>Relationships:</b><p>
        <p>&#9658;&nbsp;MongoDB: MongoDB supports embedded documents and referencing for modeling relationships between documents. However, it lacks built-in support for complex joins commonly used in relational databases.</p>
        <p>&#9658;&nbsp;SQL: SQL databases excel at handling relationships between tables through foreign keys and joins, enabling complex queries that span multiple tables.</p>
        <p><b>Community and Ecosystem:</b></p>
        <p>&#9658;&nbsp;MongoDB: MongoDB has a vibrant open-source community and a growing ecosystem of tools and libraries. It's particularly popular in modern web development and big data applications.<p>
        <p>&#9658;&nbsp;SQL: SQL databases have been around for decades and have mature ecosystems with a wide range of tools, frameworks, and integrations. They are commonly used in enterprise applications and traditional data warehousing.</p>
        <p>Overall, the choice between MongoDB and SQL databases depends on factors such as the nature of the application, scalability requirements, data model complexity, and developer preferences.<p>
      `;
            break;
        case 'Q:3:Ans:3':
            content = `
        <h1>Q_3_Create database for online shopping app.</h1>
        <img src="./Q_3_Create_Database_for_Online_Shopping_App.png" alt="" width=800px>
      `;
            break;
        case 'Q:4:Ans:4':
            content = `
        <h1>Q_4_Create Require collections for online shopping app and documents.</h1>
        <h2>i. User</h2>
        <h2>ii. Product category</h2>
        <h2>iii. Product</h2>
        <h2>iv. Order</h2>
        <h2>v. Review</h2>

        <p><a href="./Q_4_Create_Require_Collection_for_Online_Shopping_App/app.js"><button>Click Me To View Code</p>
      `;
            break;
        case 'Q:5:Ans:5':
            content = `
        <h1>Q_5_Write command to show all data from product collections and sort in ascending order.</h1>
        <p><a href="./Q_5_Show_All_Data_Ascending_Order/app.js"><button>Click Me To View Code</p>
      `;
            break;
        case 'Q:6:Ans:6':
            content = `
        <h1>Q_6_Update product price for particular product. </h1>
        <p><a href="./Q_6_Update_Product_Price/app.js"><button>Click Me To View Code</p>
      `;
            break;
        case 'Q:7:Ans:7':
            content = `
        <h1>Q_7_Write command to delete particular document and collection.</h1>
        <p><a href="./Q_7_Delete_Doc_Collection/app.js"><button>Click Me To View Code</p>
      `;
            break;
        default:
            content = `
        <h1>Page not found</h1>
        <p>The requested page does not exist.</p>
      `;
    }

    contentDiv.innerHTML = content;
}
