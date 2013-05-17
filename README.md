belpost
=======

Belgische postnummers/Codes postaux belges



This module provides a field that can contain a Belgian Postal
code. 

Step 1: 
Purpose: Create BelPost table in database
Description: The module needs a table with the following fields:
id (serial, primary key), code (char(4), indexed), 
city (varchar(255), indexed) 
Test1: Module install => table created
Test2: Module uninstall => table deleted
Status: ready
