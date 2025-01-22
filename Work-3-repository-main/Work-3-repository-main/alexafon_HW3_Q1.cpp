// alexafon_HW3_Q1.cpp
#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "GradStudent.h"
using namespace std;

int main()
{
	Person p1("Tony", "Stark", 1, 21, 1950);
	cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

	Employee e1("Steve", "Rogers", 7, 4, 1920, 741920);
	cout << e1.getName() << " born on: " << e1.getBirthdate() << " has employee ID: " << e1.getEmployeeID() << endl;

	Student s1("Barry", "Allen", 9, 30, 1992, 90);
	cout << s1.getName() << " born on: " << s1.getBirthdate() << " has " << s1.getNumCredits() << " credits" << endl;

	GradStudent gs1("Stephen", "Strange", 11, 18, 1930, 30);
	cout << gs1.getName() << " born on: " << gs1.getBirthdate() << " has " << gs1.getNumCredits() << " credits and can graduate: ";
	gs1.checkGraduation();
	cout << gs1.canGraduate() << endl;

	return 0;
}


