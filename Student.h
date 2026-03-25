#ifndef STUDENT_H_
#define STUDENT_H_
#include "Person.h"
#include <set>

class Student : public Person {
private:
	int studentId;
	double gpa;
	// making the courses in (set) to avoid duplicated values cuase it's store only unique keys ;)
	set<string> courses;
public:
	// param constructor
	Student(int stdId, string name, string email, double g);
	
	// getters
	int getStudentId();
	double getGpa();
	set<string> getCourses();

	// courses manage methods
	bool enrollCourse(string course);
	void showCourses();

	// override display from person
	void display() override;
};
#endif