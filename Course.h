#ifndef COURSE_H_
#define COURSE_H_
#include <iostream>
#include <string>
using namespace std;

class Course {
private:
	string courseCode;
	string courseName;
public:
	// constructor
	Course(string crsCd, string crsNm);
	
	// getters
	string getCourseCode();
	string getCourseName();

	void display();
};
#endif