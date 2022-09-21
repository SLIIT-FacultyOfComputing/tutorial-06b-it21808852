#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id,char stuName[]) {
	studentId = id;
	strcpy_s(name, stuName);
}

// Display StudentId and Name
void Student::display() {
	cout << "The student id is: " << studentId << endl;
	cout << "The student name is: " << name << endl;
}
