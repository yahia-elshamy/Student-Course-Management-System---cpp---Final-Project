#include "Person.h"

Person::Person(string n, string e)
	: name(n), email(e) {};

string Person::getName() {
	return name;
}
string Person::getEmail() {
	return email;
}

void Person::display() {
	cout << "Name: " << name << ", Email: " << email << endl;
}

Person::~Person() {}