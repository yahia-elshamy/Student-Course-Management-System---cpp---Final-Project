#ifndef INSTRUCTOR_H_
#define INSTRUCTOR_H_
#include "Person.h"

class Instructor : public Person {
private: 
	int employeeId;
	string department;
public:
	// param constructor
	Instructor(int empId, string name, string email, string dept);
	
	// getters
	int getEmployeeId();
	string getDepartment();

	// display function
	void display() override;
};

#endif