/*
Technical Requirements:
Use Iterators to iterate through the lists
Add a new assignment
Complete an assignment
Edit an assignment
Keep the assigned assignments in order by due date in ascending order
Count the number of late assignments
Read assignments from a file
Overwrites the assignment file to reflect changes
*/

//Tyler's
/* (Weight: 15%) Your program should be menu-based. Hence, the user can choose which
command to run(display assignments, add assignment, edit due date, edit description, complete
assignment, number of late assignments, save, exit)
*/
//Weight: 10%) Keep track of the assignments using doubly-linked lists.
/* (Weight: 10%) Edit an assignment in the assigned list (e.g. edit the due date or the description).
You first need to find the assignment with the given assigned date.
Don�t edit the assignment in these cases:
The assignment with the given assigned list doesn�t exists in the assigned list.
The given assigned or due dates are invalid.
*/
// (Weight: 5%) Display the assignments (the assigned and completed assignments)
// (Weight: 10%) On demand, count the number of late assignments.


//Candice's
/* (Weight: 10%) Add a new assignment (to the assigned list or the completed list).
Don�t add the assignment in these cases:
The given dates (assigned or due date) are invalid.
The due date is less or equal to the assigned date.
An assignment with the given assigned list already exists in the assigned list.
*/
// (Weight: 10%) Use iterators to iterate through the lists.
/* (Weight: 5%) Complete an assignment with a given assigned date and completion date. You first
need to find the assignment with the given assigned date. When the assignment is completed,
remove it from the assigned list and add it to the completed list. If the assignment is completed
after the due date, mark it as late.
Don�t complete the assignment in these cases:
The assignment with the given assigned list doesn�t exists in the assigned list.
The given assigned or completion dates are invalid.
*/
/* (Weight: 5%) Write a function that overwrites the assignment file to reflect the changes (e.g.
newly added, edited assigned and completed assignments). The function can be called on
demand.
*/
// (Weight: 10%) Keep the assigned assignments ordered by due date (in ascending order).
// (Weight: 10%) Initially you should read assignments from a file, and populate your assigned list.
