#pragma once
#include "Person.h"
using namespace std;

class Employee : public Person
{
private:
	int employeeID;

public:
	Employee(string first, string last, int year, int day, int month, int id) : Person(first, last, year, day, month)
	{employeeID = id;}

	int getEmployeeID() const
	{return employeeID;}

	void setEmployeeID(int id)
	{employeeID = id;}
};