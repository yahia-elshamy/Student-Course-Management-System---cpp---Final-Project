#include "Student.h"
Student::Student(int stdId, string name, string email, double g) : Person(name, email), studentId(stdId), gpa(g) {}

int Student::getStudentId() {
	return studentId;
}

double Student::getGpa() {
	return gpa;
}

set<string> Student::getCourses(){
	return courses;
}

bool Student::enrollCourse(string course) {
	auto result = courses.insert(course);
	// if the course added it will return true, otherwise false, so i can handle he can't duplicate the course he enroll in
	return result.second;
}

void Student::showCourses() {
	if (courses.empty()) {
		cout << "No courses enrolled '_' \n";
		return;
	}
	cout << "Courses: ";
	for (auto element : courses) {
		cout << element << " ";
	}
	cout << endl;
}

void Student::display() {
	Person::display();
	cout << "ID: " << studentId << ", GPA: " << gpa << endl;
	showCourses();
}