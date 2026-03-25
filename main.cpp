#include <iostream>
#include "StudentController.h"
using namespace std;

// function display the menu to the user  
void showMenu() {
    cout << "\n===== Student Course Management System =====" << endl;
    cout << "[1] Add Student" << endl;
    cout << "[2] Remove Student" << endl;
    cout << "[3] Search Student" << endl;
    cout << "[4] Display All Students" << endl;
    cout << "[5] Enroll Student in Course" << endl;
    cout << "[6] Show Student Courses" << endl;
    cout << "[7] Sort Students by GPA" << endl;
    cout << "[8] Exit" << endl;
    cout << "Choice: ";
}

int main() {
    StudentController sc;

    // dummy data to try on ...
    sc.addCourse(Course("CS101", "Intro to Programming"));
    sc.addCourse(Course("CS202", "Data Structures"));
    sc.addCourse(Course("MATH1", "Algebra"));
    sc.addCourse(Course("ENG1", "English"));

    int choice;
    do {
        showMenu();
        cin >> choice;

        if (choice == 1) {
            int id;
            string name, email;
            double gpa;
            cout << "Enter ID: ";    cin >> id;
            cout << "Enter Name: ";  cin >> name;
            cout << "Enter Email: "; cin >> email;
            cout << "Enter GPA: ";   cin >> gpa;
            if (gpa < 0.0 || gpa > 4.0) {
                cout << "Invalid GPA! Must be 0.0 - 4.0 (~_~)" << endl;
            }
            else {
                sc.addStudent(Student(id, name, email, gpa));
            }

        }
        else if (choice == 2) {
            int id;
            cout << "Enter Student ID: "; cin >> id;
            sc.removeStudent(id);

        }
        else if (choice == 3) {
            int id;
            cout << "Enter Student ID: "; cin >> id;
            sc.searchStudent(id);

        }
        else if (choice == 4) {
            sc.displayAll();

        }
        else if (choice == 5) {
            int id;
            string code;
            cout << "Enter Student ID: ";   cin >> id;
            cout << "Enter Course Code: ";  cin >> code;
            sc.enrollInCourse(id, code);

        }
        else if (choice == 6) {
            int id;
            cout << "Enter Student ID: "; cin >> id;
            sc.showStudentCourses(id);

        }
        else if (choice == 7) {
            sc.sortByGpa();

        }
        else if (choice == 8) {
            cout << "Goodbye! ^^" << endl;

        }
        else {
            cout << "Invalid choice! Enter 1-8 (*_*)" << endl;
        }

    } while (choice != 8);

    return 0;
}