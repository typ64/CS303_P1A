/*
Defines functions:
load the data from a file
add an assignment
edit an assignment
complete an assignment
order the assignments
count the late assignments
display the assignments
save the lists to the file
*/
#include "Assignment_Lists.h"

//Constructor and functions declared in "Assignment_Lists.h"

Assignment_Lists::Assignment_Lists() {} //constructor

void Assignment_Lists::load_data() {}  //loads data from a file
void Assignment_Lists::add_entry() {} //constructs a new Assignment object and calls order()
void Assignment_Lists::edit_entry() {} //changes an existing Assignment object and calls order()
void Assignment_Lists::complete_entry() {} //this would swap Assignment object from "is_assigned" to "is_completed"
void Assignment_Lists::order() {} //orders entries in order of dueDate (ascending)
int Assignment_Lists::count_late() {} //compares dueDate with current date and increments a counter?
void Assignment_Lists::display() {} //displays entries
void Assignment_Lists::save() {} //saves data to a file


