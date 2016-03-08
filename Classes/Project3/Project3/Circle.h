#include <iostream>
#include <string>

using namespace std;

class circle
{
private:
	float radius;

public:
	float getradius();
	void setradius(float r);
	float getArea(float r);
	float getDiamater(float r);
	float getCircumference(float r);
};