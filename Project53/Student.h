#pragma once
#include <string>
#include <iostream>

using namespace std;

class Student {
publick:
	string name;
	int age;
	double mark;


//default constructor (конструктор по умолчанию)
	Student() {
		name = "no name";
		age = 5;
		mark = 4;
}
	//canonical constructor with parameters
	Student(string nm, int a, double m) {
		name = nm;
		age = a;
		mark = m;
	}
	//constructor with parameters
	Student(string nm) {
		name = nm;
		age = 0;
		mark = 0;
	}
	string convert() {
		string s = "";
	}

};