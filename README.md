# Student Course Management System

A C++ console application for managing students and their enrolled courses, built using Object-Oriented Programming (OOP) principles and the C++ Standard Template Library (STL).

---

## Features

- Add and remove students
- Search for a student by ID
- Display all students
- Enroll students in courses
- Show a student's enrolled courses with full details
- Sort students by GPA (highest to lowest)
- Prevent duplicate student IDs and duplicate course enrollments

---

## Project Structure

```
├── Person.h / Person.cpp               # Base class — shared name & email
├── Student.h / Student.cpp             # Inherits from Person — stores studentId, gpa, courses
├── Instructor.h / Instructor.cpp       # Inherits from Person — stores employeeId, department
├── Course.h / Course.cpp               # Stores course code and course name
├── StudentController.h / StudentController.cpp  # Manages all students and courses
└── main.cpp                            # Entry point — menu interface
```

---

## Class Overview

### `Person` (Base Class)
- Attributes: `name`, `email`
- Methods: `getName()`, `getEmail()`, `display()` (virtual)

### `Student` (extends `Person`)
- Attributes: `studentId`, `gpa`, `courses` (`set<string>`)
- Methods: `enrollCourse()`, `showCourses()`, `display()` (override)
- Uses `set<string>` to prevent duplicate course enrollments automatically

### `Instructor` (extends `Person`)
- Attributes: `employeeId`, `department`
- Methods: `getEmployeeId()`, `getDepartment()`, `display()` (override)

### `Course`
- Attributes: `courseCode`, `courseName`
- Methods: `getCourseCode()`, `getCourseName()`, `display()`

### `StudentController`
- Attributes: `map<int, Student>`, `map<string, Course>`
- Methods: `addStudent()`, `removeStudent()`, `searchStudent()`, `displayAll()`, `sortByGpa()`, `addCourse()`, `enrollInCourse()`, `showStudentCourses()`

---

## OOP Concepts Applied

| Concept | Where |
|---|---|
| Encapsulation | All classes use `private` attributes with `public` getters |
| Inheritance | `Student` and `Instructor` both inherit from `Person` |
| Polymorphism | `virtual display()` in `Person`, overridden in `Student` and `Instructor` |
| Abstraction | `StudentController` hides all data management logic |

---

## STL Used

| Container / Algorithm | Where | Purpose |
|---|---|---|
| `map<int, Student>` | `StudentController` | Fast student lookup by ID |
| `map<string, Course>` | `StudentController` | Fast course lookup by code |
| `set<string>` | `Student` | Prevent duplicate course enrollments |
| `vector<Student>` | `sortByGpa()` | Temporary list for sorting |
| `sort()` + lambda | `sortByGpa()` | Sort students by GPA descending |
| `find()` | `searchStudent()`, `removeStudent()` | Efficient map search |

---

## Requirements

- C++ compiler supporting C++11 or later (e.g. g++, MSVC, Clang)
- No external libraries required

---

## How to Compile and Run

### Using g++ (Linux / macOS / Windows with MinGW)

```bash
g++ -std=c++11 -o app main.cpp Person.cpp Student.cpp Instructor.cpp Course.cpp StudentController.cpp
./app
```

### Using Visual Studio (Windows)

1. Create a new **Empty C++ Project**
2. Add all `.h` and `.cpp` files to the project
3. Press **Ctrl + F5** to build and run

---

## Menu Options

```
===== Student Course Management System =====
[1] Add Student
[2] Remove Student
[3] Search Student
[4] Display All Students
[5] Enroll Student in Course
[6] Show Student Courses
[7] Sort Students by GPA
[8] Exit
```

---

## Sample Output

```
Choice: 1
Enter ID: 101
Enter Name: Sara
Enter Email: sara@email.com
Enter GPA: 3.8
Student added. :)

Choice: 5
Enter Student ID: 101
Enter Course Code: CS101
Enrolled. :)

Choice: 7
Students sorted by GPA:
Name: Sara, Email: sara@email.com
ID: 101, GPA: 3.8
Courses: CS101
```

---

## Notes

- GPA must be between **0.0 and 4.0** — invalid values are rejected
- Student IDs must be **unique** — duplicate IDs are not allowed
- A student **cannot enroll in the same course twice**
- Courses must be added to the system before students can enroll in them

---

## References

- C++ STL Documentation: https://cppreference.com
- OOP in C++: https://www.learncpp.com
