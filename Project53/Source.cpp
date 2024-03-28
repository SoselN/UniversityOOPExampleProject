#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
	//int n{10};
	// int n = 10;
	//int array[10]{}
	// int array[10]{1, 2, 3, 4, 5}
	// int array[4]{1, 2, 3, 4}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << array[i];
	//}

	//cout << endl;

	/*Student s1("Alex", 14, 9);
	Student s2("Alice");
	Student s3(10);
	Student s4;
	Student s5{};
	Student s6{"Peter"};
	Student s7{ "Anna", 13, 7 };*/
	//Student s8{ "Anna", 13}; Error
	//Student s9 = Student("Alice");

	const int size = 3;
	Student students[size];
	//Student students[size]{ {"Alice"}, {10}, {"Peter", 14, 9} };

	/*cout << s1.convert() << endl;
	cout << s2.convert() << endl;
	cout << s3.convert() << endl;
	cout << s4.convert() << endl;
	cout << s5.convert() << endl;
	cout << s6.convert() << endl;
	cout << s7.convert() << endl;*/
	//cout << s8.convert() << endl;
	//cout << s9.convert() << endl;

	return 0;
}