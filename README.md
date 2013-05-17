belpost
=======

Belgische postnummers/Codes postaux belges



This module provides a field that contains a Belgian Postal
code. 

Step 7:
Purpose: to show the real postal code (code + city) when a node is viewed
Description: based on the id the user has entered in the field, the right
postal code should be shown when viewing the field (using entity_view)
Test 1: enter an existing id for the field and observe that the right
postal code is shown
Status: dev

Step 6:
Purpose: provide a belpost field that can be used with other entities
Description: A user must be able to use a Belgian Postal code as field
for a node, user, ...
A belpost field type must appear in the list of available fields
in the field UI and we must be able to add a field in which we can store an 
integer
Test 1: Goto the field ui and observe that the belpost field type appears 
in the list and that we can add the field to a content type
Test 2: Store an integer in the field and test whether the user can change it
Status: ready

Step 5:
Purpose: Implement 'administer belpost' permission
Description: only users with 'administer belpost' permission can
add, update or delete belpost entities
Test1: check that a user without 'administer belpost' cannot add,
update and delete belpost entities
Test2: create a role 'belpost administrators' with the 'administer belpost'
permission. Check that a member of this group can view, add, update and delete
belpost entities
Status: ready

Step 4:
Purpose: Administer new Belpost Entities manually using a list
Description: The user should be able to a read, add, update and delete
Belpost entities in an list of entities located under the uri 'admin/belpost'
Test1: Add a new Belpost entity and verify that it exists in the database
Test2: Update an existing Belpost entity and verify that it has changed in the 
database
Test3: Delete an existing Belpost entity and verify that is has been removed 
in the database
Test4: Click on a Belpost entity in the list en verify that it shows on the uri
'belpost/<id>'
status: ready

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
