#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include <string>
#include "Date.h"

using namespace std;

enum status {assigned, completed, late}; 

class Assignment {

public:

	Assignment(string the_dueDate,
		const string& the_description,
		const string the_assignedDate,
		const status& the_currentStatus) :
		dueDate(the_dueDate),
		description(the_description),
		assignedDate(the_assignedDate),
		currentStatus(the_currentStatus) {}

	Assignment() : dueDate(2016, 1, 1), description(""), assignedDate(2016, 1, 1), currentStatus(assigned) {}

	Date get_dueDate() const { return dueDate; }
	string get_description() const { return description; }
	Date get_assignedDate() const { return assignedDate; }
	status get_currentStatus() const { return currentStatus; }

	void set_dueDate(const Date& new_dueDate) {
		dueDate = new_dueDate;
	}
	void set_description(const string& new_description) {
		description = new_description;
	}
	void set_assignedDate(const Date& new_assignedDate) { 
		assignedDate = new_assignedDate;
	}
	void set_currentStatus(const status& new_currentStatus) {
		currentStatus = new_currentStatus;
	}

private:

	Date dueDate;
	string description;
	Date assignedDate;
	status currentStatus;

};

#endif