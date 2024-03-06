-- 2. Create table given below: Employee and IncentiveTable

-- create database dbEmployee

-- use dbEmployee

-- create table Employee(
-- Employee_id int auto_increment,
-- First_name varchar(50),
-- Last_name varchar(50),
-- Salary dec(18),
-- Joining_date datetime,
-- Department varchar(50),
-- primary key(Employee_id)
-- );

-- create table Incentive(
-- Employee_ref_id int,
-- Incentive_date date,
-- Incentive_amount dec(18)
-- );

-- insert into Employee(First_name,Last_name,Salary,Joining_date,Department)
-- values('John','Abraham',1000000,'01-JAN-13 12.00.00 AM','Banking'),
-- ('Michael','Clarke',800000,'01-JAN-13 12.00.00 AM','Insurance'),
-- ('Roy','Thomas',700000,'01-FEB-13 12.00.00 AM','Banking'),
-- ('Tom','Jose',600000,'01-FEB-13 12.00.00 AM','Insurance'),
-- ('Jerry','Pinto',650000,'01-FEB-13 12.00.00 AM','Insurance'),
-- ('Philip','Mathew',750000,'01-JAN-13 12.00.00 AM','Services'),
-- ('TestName1','123',650000,'01-JAN-13 12.00.00 AM','Services'),
-- ('TestName2','Lname%',600000,'01-FEB-13 12.00.00 AM','Insurance')

-- update Employee set Joining_date='2013-01-01 12:00:00' where Employee_id in(1,2,6,7)

-- update Employee set Joining_date='2013-02-01 12:00:00' where Employee_id in(3,4,5,8)


-- insert into Incentive (Employee_ref_id,Incentive_date,Incentive_amount)
-- values(1,'2013-02-01',5000),
-- (2,'2013-02-01',3000),
-- (3,'2013-02-01',4000),
-- (1,'2013-01-01',4500),
-- (2,'2013-01-01',3500)


-- 3. Get First_Name from employee table using Tom name “Employee Name”.

-- select First_name from Employee where First_name='Tom'

-- 4. Get FIRST_NAME, Joining Date, and Salary from employee table.

-- select First_name,Joining_date,Salary from Employee

-- 5. Get all employee details from the employee table order by First_Name
-- Ascending and Salary descending?

-- select * from Employee order by First_name asc,Salary desc

-- 6. Get employee detailsfromemployee table whose first name contains ‘J’.

-- select * from Employee where First_name like '%j%'

-- 7. Get department wise maximum salary from employee table order by
-- 8. salary ascending?

-- select MAX(Salary), Department from Employee group by Department order by Salary asc


-- 9. Select first_name, incentive amount from employee and incentives table 
-- for those employees who have incentives and incentive amount greater than 
-- 3000

-- select Employee.First_name,Incentive.Incentive_amount 
-- from Employee inner join Incentive
-- on Employee.Employee_id=Incentive.Employee_ref_id
-- where Incentive_amount>3000
