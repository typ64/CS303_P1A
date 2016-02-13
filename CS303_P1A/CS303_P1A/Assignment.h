#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include <string>

using namespace std;

enum status {assigned, completed, late}; 

class Assignment {

public:

	/*We need to construct a new Assignment and a default Assignment*/

	string get_dueDate() const { return dueDate; }   //Must be changed to Date data type
	string get_description() const { return description; }
	string get_assignedDate() const { return assignedDate; }   //Must be changed to Date data type
	status get_currentStatus() const { return currentStatus; }

private:

	string dueDate;   //Must be changed to Date data type
	string description;
	string assignedDate;   //Must be changed to Date data type
	status currentStatus;


};

#endif