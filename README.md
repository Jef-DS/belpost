belpost
=======

Belgische postnummers/Codes postaux belges

This module provides a field that contains a Belgian Postal
code. 

Step 10:
Purpose: Import the Belgian postal codes
Description: When the module is installed, a list of Belgian
Postal codes must be imported
Test 1: install the module and check the database to see if
the Belgian Postal Codes are imported
Status: ready

Step 9: 
Purpose: Let Drupal recognize (validate) a combination of code and city
and store the corresponding id in the field. For combinations that cannot
be validated an error message must be shown.
Description: In order for autocompletion to work the value in the textfield
should be 'code city'. This is the format that will be used by the
autocompletion widget.
Test 1: enter an existing combination of code and city and check that the 
right id is stored in the database
Test 2: enter an inexisting combination of code and city and check
that the user gets an error
status:ready

Step 9:
Purpose: to provide autocompletion so as to let the user type in a postal code
Description: the user can start typing a postal code and the module will
show a list of postal codes that fit the typed in text
Test1: Type the first character of an existing postal code and see that
a list of corresponding postal codes is displayed
Status: Cancelled
Remark: After studying the autocomplete features of Drupal 7 it looks
like an intermediary step is necessary. Instead of typing in an id, the
user should type in a postal code and a city. Drupal must recognize the
code and the city (i.e. validate) and store the corresponding in the 
database

Step 8:
Purpose: to provide a view mode that is more appropriate for the display of a
field in a content type
Description: the default (full) view mode of BelPost shows the label (=city)
and the postal code as it is defined in the BuildContent function. When used as
a field only the postal code should be shown
Test 1: view the postal code as a field and check that only the postal code and 
the city is shown (once)
Status: ready

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
