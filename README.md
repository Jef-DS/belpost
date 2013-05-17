belpost
=======

Belgische postnummers/Codes postaux belges



This module provides a field that contains a Belgian Postal
code. 
Step 2:
Purpose: Show an existing Belpost Entity
Description: An existing (in the database) Entity must
show on url /belpost/<id>
Test1: insert a postal code in the database and show it on
/belpost/id with both the postal code and the city
Status: ready 

Step 1: 
Purpose: Create BelPost table in database
Description: The module needs a table with the following fields:
id (serial, primary key), code (char(4), indexed), 
city (varchar(255), indexed) 
Test1: Module install => table created
Test2: Module uninstall => table deleted
Status: ready
