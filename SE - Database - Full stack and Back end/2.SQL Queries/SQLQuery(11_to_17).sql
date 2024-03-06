-- 11. Create table given below: Salesperson and Customer

-- Create Database db_TOPSTECH

-- use db_TOPSTECH

-- create table Salesperson(
-- SNo int,
-- SNAME varchar(50),
-- CITY varchar(50),
-- COMM dec(18,2),
-- primary key(SNo)
-- );


-- insert into Salesperson(Sno,SNAME,CITY,COMM)
-- Values(1001,'Peel','London',.12),
-- (1002,'Serres','San Jose',.13),
-- (1004,'Motika','London',.11),
-- (1007,'Rafkin','Barcelona',.15),
-- (1003,'Axelrod','New York',.1)

-- create table Customer(
-- CNM int,
-- CNAME varchar(50),
-- CITY varchar(50),
-- RATING int,
-- SNo int,
-- primary key (CNM),
-- foreign key (SNo) references Salesperson (SNo)
-- );

-- insert into Customer(CNM,CNAME,CITY,RATING,SNO)
-- values(201,'Hoffman','London',100,1001),
-- (202,'Giovanne','Roe',200,1003),
-- (203,'Liu','San Jose',300,1002),
-- (204,'Grass','Barcelona',100,1002),
-- (206,'Clemens','London',300,1007),
-- (207,'Pereira','Roe',100,1004)


-- 12. Retrieve the below data from above table

-- 14. Names and cities of all salespeople in London with commission above 0.12

-- select SNAME,CITY from Salesperson where CITY='London' and COMM>0.12

-- 15. All salespeople either in Barcelona or in London

-- select * from Salesperson where CITY='Barcelona' or CITY='London'

-- 16. All salespeople with commission between 0.10 and 0.12. (Boundary
-- valuesshould be excluded).

-- select * from Salesperson where COMM>0.10 and COMM<0.12

-- 17. All customers excluding those with rating <= 100 unless they are located 
-- inRome

-- update Customer set CITY='Rome' where CNM in (202,207)

-- select * from Customer where RATING > 100 and NOT CITY='Rome'