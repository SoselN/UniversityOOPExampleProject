#pragma once
#include <string>
#include <iostream>

using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;


//default constructor (конструктор по умолчанию)
	Student() {
		cout << "default constructor" << endl;
		name = "no name";
		age = 4;
		mark = 5;
}
	//canonical constructor with parameters
	Student(string nm, int a, double m) {
		cout << "canonical constructor with parameters" << endl;
		name = nm;
		age = a;
		mark = m;
	}
	//constructor with parameters
	Student(string nm) {
		cout << "constructor with parameters 1" << endl;
		name = nm;
		age = 0;
		mark = 0;
	}

	Student(double m) {
		cout << "constructor with parameters 2" << endl;
		name = "no name";
		age = 4;
		mark = m;
	}
	// destructor ~
	~Student() {
		cout << "destructor" << endl;
	}

	string convert() {
		string s = "";
		s += name;
		s += " age is " + to_string(age);
		s += "and " + name + " mark is " + to_string(mark);
		cout << s << endl;
	}

};