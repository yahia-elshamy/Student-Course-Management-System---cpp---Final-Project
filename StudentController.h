#ifndef STUDENTCONTROLLER_H_
#define STUDENTCONTROLLER_H_
#include "Student.h"
#include "Course.h"
#include <map>
#include <vector>
#include <algorithm>

class StudentController {
private:
	// to store every student with an id in the map to make them unique without repeating any id num
	map<int, Student> students;
	// the key in string cuz every course has a course code instead of int id
	map<string, Course> courses;
public:
	// operations to do on the students
	void addStudent(Student s);
	void removeStudent(int id);
	void searchStudent(int id);
	void displayAll();
	void sortByGpa();

	// operations to do on  courses
	void addCourse(Course c);
	void enrollInCourse(int id, string code);
	void showStudentCourses(int id);
};
#endif