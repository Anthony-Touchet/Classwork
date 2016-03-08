#include <iostream>
#include <string>
using namespace std;

class highscores
{
private:
	int hsc1;
	int hsc2;
	int hsc3;

public:
	int geths1();
	int seths1(int high1);

	int geths2();
	int seths2(int high2);

	int geths3();
	int seths3(int high3);

	int average(int high1set, int high2set, int high3set);
};