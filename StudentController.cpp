#include "StudentController.h"
void StudentController::addStudent(Student s) {
	if (students.count(s.getStudentId())) {
		cout << "ID already exists!, why don't you try another one? :)\n"; 
		return;
	}
	students.insert({ s.getStudentId(), s });
	cout << "Student added. :)\n";
}

void StudentController::removeStudent(int id) {
	auto it = students.find(id);
	if (it == students.end()) {
		cout << "Student not found! *_* \n";
		return;
	}
	students.erase(it);
	cout << "Student removed. :( \n";
}

void StudentController::searchStudent(int id) {
	auto it = students.find(id);
	if (it == students.end()) {
		cout << "Student not found! *_*\n";
		return;
	}
	it->second.display();
}

void StudentController::displayAll() {
	if (students.empty()) {
		cout << "No students founded! *_*\n";
		return;
	}
	for (auto pair : students) {
		pair.second.display();
	}
}

void StudentController::sortByGpa() {
	vector<Student> temp;
	for (auto pair : students) {
		temp.push_back(pair.second);
	}

	sort(temp.begin(), temp.end(), [](Student a, Student b) {
		return a.getGpa() > b.getGpa();
		});

	cout << "Students sorted be GPA: \n";
	for (auto s : temp) {
		s.display();
	}
}

void StudentController::addCourse(Course c) {
	courses.insert({ c.getCourseCode(), c });
	cout << "Course added. ^^\n";
}

void StudentController::enrollInCourse(int id, string code) {
	if (!students.count(id)) {
		cout << "Student not found! *_*\n";
		return;
	}

	if (!courses.count(code)) {
		cout << "Courses not found! +_+\n";
		return;
	}

	bool ok = students.at(id).enrollCourse(code);
	cout << (ok ? "Enrolled. :)" : "Already enrolled! @_@") << endl;
}

void StudentController::showStudentCourses(int id) {
	auto it = students.find(id);
	if (it == students.end()) {
		cout << "Student not found!\n";
		return;
	}

	for (auto code : it->second.getCourses()) {
		auto c = courses.find(code);
		if (c != courses.end()) c->second.display();
	}
}