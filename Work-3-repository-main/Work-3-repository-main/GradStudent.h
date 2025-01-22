#pragma once
#include "Student.h"
using namespace std;

class GradStudent : public Student
{
private:
	bool can_graduate;

public:
	GradStudent(string first, string last, int year, int day, int month, int credits) : Student(first, last, year, day, month, credits)
	{can_graduate = false;}

	bool canGraduate() const
	{return can_graduate;}

	void checkGraduation()
	{
		if (getNumCredits() >= 30)
		{can_graduate = true;}
	}
};