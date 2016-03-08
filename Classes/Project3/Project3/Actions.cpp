#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

float circle::getradius()
{
	float r;
	cout << "Enter a radius for our circle. \n";
	cin >> r;
	
	return r;
}

void circle::setradius(float r)
{
	radius = r;
	cout << radius << endl;
}

float circle::getArea(float area)
{
	float p = 3.14;//substitution for pi.
	area = (radius*radius)*p;
	return area;
}

float circle::getDiamater(float d)
{
	d = radius * 2;
	return d;
}

float circle::getCircumference(float cir)
{
	float p = 3.14;//substitution for pi.
	cir = 2 * p * radius;
	return cir;
}