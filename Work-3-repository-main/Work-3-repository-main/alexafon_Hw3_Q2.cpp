// alexafon_Hw3_Q2.cpp
#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	Rectangle rect(5, 9);
	Triangle tri(5, 10);

	cout << "Rectangle area: " << rect.getArea() << endl;
	rect.draw();
	cout << endl;

	cout << "Triangle area: " << tri.getArea() << endl;
	tri.draw();

	rect.setHeight(5);
	rect.setWidth(9);
	cout << endl << "Rectangle new area: " << rect.getArea() << endl;

	tri.setHeight(5);
	tri.setWidth(10);
	cout << "Triangle new area: " << tri.getArea() << endl;

	return 0;
}

//Question 1
//If I was to create the polygon class in the main function instead of assigning it to a header file it would become a abstract class since there is atleast 1 pure function
//objects cannot be created thru an abstract class and would give me an error saying it cannot declare the variable "poly" to be abstract type "Polygon"

//Question 2 
//Since the Polygon class is not abstract anymore there still is an issue with creating a polygon object mainly because the function getArea has not been defined 
//Since it has not been defined the complier will give an error stating undefined reference "vtable for Polygon"
