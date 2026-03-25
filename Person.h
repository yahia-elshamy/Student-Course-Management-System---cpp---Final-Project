#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <string>
using namespace std;

class Person {
protected: 
	string name;
	string email;
public:
	// param constructor
	Person(string n, string e);

	//Getters
	string getName();
	string getEmail();

	// virtual function for polymorphism
	virtual void display();

	// virtual distructor
	virtual ~Person();
};
#endif