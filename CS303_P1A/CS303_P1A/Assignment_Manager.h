/*
Declares functions:
load the data from a file
add an assignment
edit an assignment
complete an assignment
order the assignments
count the late assignments
display the assignments
save the lists to the file
*/
#ifndef ASSIGNMENT_MANAGER
#define ASSIGNMENT_MANAGER
#include <list>
#include "Assignment.h"

class Assignment_Manager {

public:

	//Constructor and functions defined in "Assignment_Lists.cpp"

	Assignment_Manager(); //constructor

	void load_data(); //loads data from a file
	void add_entry(); //constructs a new Assignment object and calls order()
	void edit_entry(); //changes an existing Assignment object and calls order()
	void complete_entry(); //this would swap Assignment object from "is_assigned" to "is_completed"
	void order(); //orders entries in order of dueDate (ascending)
	int count_late(); //compares dueDate with current date and increments a counter?
	void display(); //displays entries
	void save(); //saves data to a file

private:
	list<Assignment> is_assigned;
	list<Assignment> is_completed;

};

#endif