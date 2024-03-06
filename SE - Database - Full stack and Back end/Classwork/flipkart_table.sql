-- create database flipkart;

-- use flipkart;

-- create table customer(
-- customer_id int auto_increment,
-- customer_name varchar(50),
-- customer_address varchar(50),
-- customer_mobile varchar(50),
-- city varchar(50),
-- primary key (customer_id)
-- );

-- create table category(
-- category_id int auto_increment,
-- category_name varchar(50),
-- category_image varchar(50),
-- primary key(category_id)
-- );

-- create table product(
-- product_id int auto_increment,
-- product_name varchar(50),
-- category_id int,
-- product_price double,
-- product_rating float,
-- product_desc varchar(50),
-- primary key(product_id),
-- foreign key(category_id) references category (category_id)
-- );

-- create table ordertbl(
-- order_id int auto_increment,
-- product_id int,
-- category_id int,
-- customer_id int,
-- total double,
-- order_date datetime,
-- primary key(order_id),
-- foreign key(product_id) references product(product_id),
-- foreign key(category_id) references category(category_id),
-- foreign key(customer_id) references customer(customer_id)
-- );

-- create table payment(
-- payment_id int auto_increment,
-- order_id int,
-- total double,
-- payment_type varchar(50),
-- primary key(payment_id),
-- foreign key(order_id) references ordertbl(order_id)
-- );


-- insert into category (category_name,category_image)
-- values
-- ('Fashion','image02.jpg'),
-- ('Electronics','image03.jpg'),
-- ('Grocery','image04.jpg'),
-- ('Toys','image05.jpg'),
-- ('Appliances','image06.jpg'),
-- ('Two Wheelers','image07.jpg'),
-- ('Beauty','image08.jpg'),
-- ('Furniture','image09.jpg')

-- insert into customer (customer_name,customer_address,customer_mobile,city)
-- values('Darshan','Sec-30','3434343434','Gandhinagar'),
-- ('Ravi','Nikol','4545454545','Ahmedabad'),
-- ('Hiren','Naroda','5656565656','Ahmedabad'),
-- ('Hiren','Krishnanagar','6767676767','Ahmedabad'),
-- ('Vijay','Rakhiyal','1111111111','Gandhinagar'),
-- ('Chirag','Kudasan','2222222222','Gandhinagar'),
-- ('Krushil','Sec-30','3333333333','Gandhinagar'),
-- ('Rudra','Kudasan','4564564564','Gandhinagar'),
-- ('Devang','Prantij','1212121212','Himmatnagar'),
-- ('Anand','Prantij','2323232323','Himmatnagar')

-- insert into product (product_name,category_id,product_price,product_rating,product_desc)
-- values ('iphone 15 plus',1,90000,4.5,'IOS Phone'),
-- ('Samsung Galaxy',1,100000,4,'Android Phone'),
-- ('T-shirt',2,297,4.8,'Men Printed Round Neck Pure Cotton White T-Shirt'),
-- ('Blazer',2,5220,4,'Men Solid Single Casual Blazer  (Maroon)'),
-- ('Bluetooth Headphones',3,499,4.6,'Aroma NB119 Titanium'),
-- ('Home Theatre',3,2999,4.8,'78 W Bluetooth Home Theatre'),
-- ('Coffee',4,1091,4.5,'Levista Classic Instant Coffee  (200 g)'),
-- ('Chips',4,30,4.1,'Bikaji Chips Cream & Onion Chips  (100 g)'),
-- ('Doll',5,2649,4.6,'BARBIE The Movie Doll'),
-- ('Microwave Oven',6,5890,4.4,'20 L Solo Microwave Oven')


-- insert into ordertbl (product_id,category_id,customer_id,total,order_date)
-- values(1,1,1,90000,'2024-01-01'),
-- (2,1,2,100000,'2024-01-02'),
-- (3,2,3,297,'2024-01-03'),
-- (4,2,4,5220,'2024-01-04'),
-- (5,3,5,499,'2024-01-05'),
-- (6,3,6,2999,'2024-01-06'),
-- (7,4,7,1091,'2024-01-07'),
-- (8,4,8,30,'2024-01-08'),
-- (9,5,9,2649,'2024-01-09'),
-- (10,6,10,5890,'2024-01-10')

-- insert into payment (order_id,total,payment_type)
-- values(1,90000,'Debit Card'),
-- (2,100000,'Credit Card'),
-- (3,297,'Cash'),
-- (4,5220,'Net Banking'),
-- (5,499,'Cash'),
-- (6,2999,'UPI'),
-- (7,1091,'POD'),
-- (8,30,'Cash'),
-- (9,2649,'UPI'),
-- (10,5890,'Credit Card')

select * from customer where customer_name like 'D%'
select * from customer where customer_name like 'D%n'
select * from customer where customer_name like 'Darsha_'
select * from customer where customer_name like '%n'

select * from customer order by customer_name desc
select * from product order by product_price desc
select * from product where product_price > 5000 order by product_price desc

select count(*) from product

select category_id, count(*)
from product group by(category_id
select category_id, sum(product_price) from product group by(category_id)
select count(city),city from customer group by (city)

select count(*),product_price,product_name
from product
group by product_price
having 5000 < sum(product_price)      //jyare arithmatic function no use karvo hoy tyare where ni jagyae having no use karvo


desc product

use flipkart

select *
from product left join ordertbl
on product.product_id = ordertbl.product_id

select *
from ordertbl left join product
on ordertbl.product_id = product.product_id