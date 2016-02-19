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



void Assignment_Lists::load_data(const string& source_name) {
		// Remember the source name for use by save.
		this->source_name = source_name;
		// Create an input stream for this file.
		ifstream in(source_name);
		if (in) { // Stream exists.
			Date due_date;
			string description;
			Date assigned_date;
			status status;
			while (getline(in, line)) { //read the next line in the file, if no more lines are availble, the while loop will exist.
				String_Tokenizer st(line, ","); //a tokenizer for parsing a line of tokens (the tokens are seperated by commas)
				due_date = Date(st.next_token());
				description = st.next_token();
				assigned_date = Date(st.next_token());

				string status_as_string = st.next_token();
				switch(status_as_string){
				case "late":
					status = status::late;
					break;
				case "completed":
					status = status::completed;
					break;
				case "assigned":
					status = status::assigned;
					break;
			}

				Assignment assignment(due_date, description, assigned_date, status);






}  //loads data from a file
void Assignment_Lists::add_entry() {} //constructs a new Assignment object and calls order()
void Assignment_Lists::edit_entry() {} //changes an existing Assignment object and calls order()
void Assignment_Lists::complete_entry() {} //this would swap Assignment object from "is_assigned" to "is_completed"
void Assignment_Lists::order() {} //orders entries in order of dueDate (ascending)
int Assignment_Lists::count_late() {} //compares dueDate with current date and increments a counter?
void Assignment_Lists::display() {} //displays entries
void Assignment_Lists::save() {} //saves data to a file


