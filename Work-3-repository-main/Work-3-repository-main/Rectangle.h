#pragma once
#include "Polygon.h"
using namespace std;

class Rectangle : public Polygon
{
public:
	Rectangle(int newWidth, int newHeight) : Polygon(newWidth, newHeight) {}

	int getArea() const
	{
		return width * height;
	}

	void draw() const
	{
		for (int i = 0; i < height; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
};