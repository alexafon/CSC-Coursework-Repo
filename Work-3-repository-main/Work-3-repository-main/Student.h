#pragma once
#include "Person.h"
using namespace std;
class Student : public Person
{
private:
	int num_credits;
protected:
	
public:
	Student(string first, string last, int year, int day, int month, int credits) : Person(first, last, year, day, month)
	{num_credits = credits;}

	int getNumCredits() const
	{return num_credits;}

	void setNumCredits(int credits)
	{num_credits = credits;}
};