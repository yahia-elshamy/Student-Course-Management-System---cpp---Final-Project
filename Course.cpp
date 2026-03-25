#include "Course.h"
Course::Course(string crsCd, string crsNm) : courseCode(crsCd), courseName(crsNm) {}

string Course::getCourseCode() {
	return courseCode;
}

string Course::getCourseName() {
	return courseName;
}

void Course::display() {
	cout << "[" << courseCode << "] " << courseName << endl;
}