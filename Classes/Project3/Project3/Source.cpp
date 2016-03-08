#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float a;
	float r;
	float d;
	float cir;
	circle c;
	r = c.getradius();

	c.setradius(r);

	a =c.getArea(r);
	cout << a << endl;

	d = c.getDiamater(r);
	cout << d << endl;

	cir = c.getCircumference(r);
	cout << cir << endl;
	system("pause");
}