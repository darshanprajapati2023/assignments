-- 1. Create Table Name : Student and Exam

-- create database school;
-- use school;

-- create table Student(
-- Rollno int auto_increment,
-- Name varchar(50),
-- Branch varchar(50),
-- primary key(Rollno)
-- );

-- create table Exam(
-- Rollno int,
-- S_code varchar(20),
-- Marks int,
-- P_code varchar(20),
-- foreign key (Rollno) references Student (Rollno)
-- );

-- insert into Student(Name,Branch)
-- values('Jay','Computer Science'),
-- ('Suhani','Electronic and Com'),
-- ('Kriti','Electronic and Com')


-- insert into Exam(Rollno,S_code,Marks,P_code)
-- values(1,'CS11',50,'CS'),
-- (1,'CS12',60,'CS'),
-- (2,'EC101',66,'EC'),
-- (2,'EC102',70,'EC'),
-- (3,'EC101',45,'EC'),
-- (3,'EC102',50,'EC')