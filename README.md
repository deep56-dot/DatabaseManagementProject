# Employee Database Management System

## Instruction

- Please Commnet Out Content of Waitmenu avilable in include/Helper.h for running gtest project named EmpDBTest

- Please Uncommnet Out Content of Waitmenu avilable in include/Helper.h for running main project named EmployeeDatabaseManagement
 
## Introduction

- This project is an Employee Database Management System implemented in C++. It provides functionalities to manage various aspects of employee data, including departments, salaries, engineers, and managers.And provide diffrent functionalities to manage data and manipulate data with menu driven system
 
## Inheritance
 
- In this project, the Employee class serves as the base class, which is inherited by the Engineer and Manager classes. This inheritance allows for the reuse of common attributes and methods defined in the Employee class while also allowing each subclass to have its own specialized attributes and methods.

## Classes
 
### 1. Employee Class (Base Class)
 
- The Employee class defines common attributes such as id, firstname, lastname, dob, mobile, email, address, gender, doj, w_location, manager_id, and department_id. It also includes methods for CRUD operations on employee records.
 
### 2. Engineer Class
 
- The Engineer class inherits from the Employee class and adds specialized attributes such as programming_language and specialization. It also includes methods specific to engineers, such as CRUD operations on engineer records.
 
### 3. Manager Class
 
- The Manager class also inherits from the Employee class and adds specialized attributes such as management_experience and project_title. It includes methods specific to managers, such as CRUD operations on manager records.
 
### 4. Department Class
 
- The Department component handles department-related data within the organization. It includes attributes such as name, manager_id, and description. The Department class provides methods for CRUD operations on department records.
 
### 5. Salary Class
 
- The Salary component is responsible for managing salary-related information for employees. It includes attributes such as base_salary, bonus, and amount, and provides methods for CRUD operations on salary records.
 
## Features of Project:
 
### 1. CRUD Operations:
 
- Efficiently manage employee data with functionalities for creating, reading, updating, and deleting records.
- Click 4 Acess Tables to Manipulate Employee Datbase Tables
- Click 5 Acess Other Tables to Manipulate Other User Defined Tables Created by You

 
### 2. Table Operations:
 
- Options for create, display, delete, and describe database tables.
 
### 3. Backup:
 
- User can take back up all existing tables into CSV format files stored in a “Backup” folder for data preservation.
 
### 4. Input Validation:
 
- Ensure data integrity by validating each input fields.
- User Can enter invalid input max 3 times after user redirected to previous menu
 
### 5. Logging System:
 
- Each and every events are logged in “include/LOG/logs.txt” file that helps to track and monitors the errors, warnings and information.
 
## GTest Integration
 
- Integrated Google Test (GTest) for unit testing of each functionality to ensure robustness and reliability.
 

## Requirements
 
- C++ compiler that supports C++17 standard.
- SQLite database library.
- Standard C++ libraries.


