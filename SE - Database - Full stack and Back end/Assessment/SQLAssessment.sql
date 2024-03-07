-- Write SQL query to solve the problem given below
-- Consider three table named as city, customer and country 
-- The city table is given below : 
-- The Customer table : 
-- The Country table :
-- Note :
-- ● While each city has a related country, not all countries have related cities (Spain & 
-- Russia don’t have them)
-- ● Same stands for the customers. Each customer has the city_id value defined, but only 
-- 3 cities are being used (Berlin, Zagreb & New York)
-- Now commute the following tasks : 
-- Task : 1 (join multiple tables using left join)
-- List all Countries and customers related to these countries.
-- For each country displaying its name in English, the name of the city customer is located in as 
-- well as the name of the customer. 
-- Return even countries without related cities and customers.
-- Task : 2 (join multiple tables using both left and inner join)
-- Return the list of all countries that have pairs(exclude countries which are not referenced by any 
-- city). For such pairs return all customers.
-- Return even pairs of not having a single customer
-- Make sure to make your code clean kneat

-- use db_topstech

-- create table Country (
-- id int auto_increment,
-- country_name varchar(50),
-- country_name_eng varchar(50),
-- country_code varchar(50),
-- primary key(id)
-- );

-- insert into Country (country_name,country_name_eng,country_code)
-- values('Deutschland','Germany','DEU'),
-- ('Srbija','Serbia','SRB'),
-- ('Hrvatska','Croatia','HRV'),
-- ('United States of America','United States of America','USA'),
-- ('Polska','Poland','POL'),
-- ('Espana','Spain','ESP'),
-- ('Rossiya','Russia','RUS')

-- create table city(
-- id int auto_increment,
-- city_name varchar(50),
-- lat dec(18,6),
-- lng dec(18,6),
-- country_id int,
-- primary key(id),
-- foreign key (country_id) references Country (id)
-- );

-- insert into city (city_name,lat,lng,country_id)
-- values('Berlin',52.520008,13.404954,1),
-- ('Belgrade',44.787197,20.457273,2),
-- ('Zagreb',45.815399,15.966568,3),
-- ('New York',40.730610,-73.935242,4),
-- ('Los Angeles',34.052235,-118.243683,4),
-- ('Warsaw',52.237049,21.017532,5)


-- create table Customertbl (
-- id int auto_increment,
-- customer_name varchar(50),
-- city_id int,
-- customer_address varchar(100),
-- next_call_date date,
-- ts_inserted datetime,
-- primary key (id),
-- foreign key (city_id) references city (id)
-- );

-- insert into Customertbl (customer_name,city_id,customer_address,next_call_date,ts_inserted)
-- values('Jewelry Store',4,'Long Street 120','2020-01-21','2020-01-09 14:01:20.000'),
-- ('Bakery',1,'Kurfustendamm 25','2020-02-21','2020-01-09 17:52:15.000'),
-- ('Cafe',1,'Tauentzienstrabe 44','2020-01-21','2020-01-10 08:02:49.000'),
-- ('Restaurant',3,'Ulica lipa 15','2020-01-21','2020-01-10 09:20:21.000')


-- Task : 1 (join multiple tables using left join)
-- List all Countries and customers related to these countries.
-- For each country displaying its name in English, the name of the city customer is located in as 
-- well as the name of the customer. 
-- Return even countries without related cities and customers.

-- SELECT c.country_name_eng, ci.city_name, cu.customer_name
-- FROM customertbl as cu
-- LEFT JOIN city as ci ON cu.city_id = ci.id
-- LEFT JOIN country as c ON ci.country_id = c.id;


-- SELECT c.country_name_eng, ci.city_name, cu.customer_name
-- FROM country as c
-- LEFT JOIN city as ci ON ci.country_id = c.id
-- LEFT JOIN customertbl as cu ON cu.city_id = ci.id;


-- Task : 2 (join multiple tables using both left and inner join)
-- Return the list of all countries that have pairs(exclude countries which are not referenced by any 
-- city). For such pairs return all customers.
-- Return even pairs of not having a single customer

-- SELECT c.country_name_eng, ci.city_name, cu.customer_name
-- FROM country as c
-- INNER JOIN city as ci ON ci.country_id = c.id
-- LEFT JOIN customertbl as cu ON cu.city_id = ci.id;
























