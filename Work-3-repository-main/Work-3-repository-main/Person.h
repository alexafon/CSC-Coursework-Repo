#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string first, string last, int year, int day, int month);
	string getName();
	string getBirthdate();

private:
	string Fname;
	string Lname;

protected:
	int birthDay;
	int birthMonth;
	int birthYear;
};

#endif
