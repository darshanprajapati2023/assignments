-- 20.From the following table, write a SQL query to select a range of 
-- products whose price is in the range Rs.200 to Rs.600. Begin and end 
-- values are included. Return pro_id, pro_name, pro_price, and pro_com.

-- use db_topstech

-- create table item_mast(
-- PRO_ID int,
-- PRO_NAME varchar(50),
-- PRO_PRICE dec(18,2),
-- PRO_COM int,
-- primary key (PRO_ID)
-- );

-- insert into item_mast (PRO_ID,PRO_NAME,PRO_PRICE,PRO_COM)
-- values(101,'Mother Board',3200.00,15),
-- (102,'Key Board',450.00,16),
-- (103,'ZIP drive',250.00,14),
-- (104,'Speaker',550.00,16),
-- (105,'Monitor',5000.00,11),
-- (106,'DVD drive',900.00,12),
-- (107,'CD drive',800.00,12),
-- (108,'Printer',2600.00,13),
-- (109,'Refill cartridge',350.00,13),
-- (110,'Mouse',250.00,12)


-- select * from item_mast where PRO_PRICE between 200.00 AND 600.00

-- 21.From the following table, write a SQL query to calculate the average price 
-- for a manufacturer code of 16. Return avg.

-- select avg(PRO_PRICE) as avg from item_mast where PRO_COM=16

-- 22.From the following table, write a SQL query to display the pro_name as 
-- 'Item Name' and pro_price as 'Price in Rs.'

-- select PRO_NAME as 'Item Name', PRO_PRICE as 'Price in Rs.' from item_mast


-- 23.From the following table, write a SQL query to find the items whose prices
-- are higher than or equal to $250. Order the result by product price in 
-- descending, then product name in ascending. Return pro_name and 
-- pro_price.

-- select PRO_NAME,PRO_PRICE from item_mast where PRO_PRICE >= 250 order by PRO_PRICE DESC, PRO_NAME ASC

-- 24.From the following table, write a SQL query to calculate average price of the 
-- items for each company. Return average price and companycode.

-- select avg(PRO_PRICE),PRO_COM from item_mast where PRO_COM=11
-- select avg(PRO_PRICE),PRO_COM from item_mast where PRO_COM=12
-- select avg(PRO_PRICE),PRO_COM from item_mast where PRO_COM=13
-- select avg(PRO_PRICE),PRO_COM from item_mast where PRO_COM=14
-- select avg(PRO_PRICE),PRO_COM from item_mast where PRO_COM=15
-- select avg(PRO_PRICE),PRO_COM from item_mast where PRO_COM=16

