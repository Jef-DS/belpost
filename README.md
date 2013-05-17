belpost
=======

Belgische postnummers/Codes postaux belges



This module provides a field that contains a Belgian Postal
code. 

Step 4:
Purpose: Administer new Belpost Entities manually using a list
Description: The user should be able to a read, add, update and delete
Belpost entities in an list of entities located under the uri 'belpost'
Test1: Add a new Belpost entity and verify that it exists in the database
Test2: Update an existing Belpost entity and verify that it has changed in the 
database
Test3: Delete an existing Belpost entity and verify that is has been removed 
in the database
Test4: Click on a Belpost entity in the list en verify that it shows on the uri
'belpost/<id>'
status: not started

Step 3:
Purpose: Define permissions for Belpost entities
Description: There are two permissions for Belpost entities: 
'view belpost' and 'administer belpost'. Only users with 'view belpost' may
view the belpost entities
Test1: check that the 2 permissions exist
Test2: make a user and check that he cannot view a belpost
Test3: make a role 'belpost viewers' with the permission 'view belpost'.
check that a member of this group can view a belpost
Not applicable Test4: we cannot test yet whether a user can administer a belpost
status: ready

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
