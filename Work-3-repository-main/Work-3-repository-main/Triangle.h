#pragma once
#include "Polygon.h"
using namespace std;

class Triangle : public Polygon
{
public:
	Triangle(int newWidth, int newHeight) : Polygon(newWidth, newHeight) {}

	int getArea() const
	{
		return width * height / 2;
	}

	void draw() const
	{
		for (int i = 1; i <= height; ++i)
		{
			for (int j = 0; j < i; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
};