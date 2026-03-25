#include "Instructor.h"

Instructor::Instructor(int empId, string name, string email, string dept) : Person(name, email), employeeId(empId), department(dept) {}

int Instructor::getEmployeeId(){
	return employeeId;
}

string Instructor::getDepartment(){
	return department;
}

void Instructor::display(){
	Person::display();
	cout << "Employee ID: " << employeeId << ", Department: " << department << endl;
}