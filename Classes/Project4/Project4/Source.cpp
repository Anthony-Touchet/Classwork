#include "HighScores.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	highscores hs;
	int high1;
	int high1set;

	int high2;
	int high2set;

	int high3;
	int high3set;

	int average;

	high1 = hs.geths1();

	high1set = hs.seths1(high1);

	cout << "This is the first high score: " << high1set << endl;


	high2 = hs.geths2();

	high2set = hs.seths2(high2);

	cout << "This is the second high score: " << high2set << endl;


	high3 = hs.geths3();

	high3set = hs.seths3(high3);

	cout << "This is the third high score: " << high3set << endl;

	average = hs.average(high1set, high2set, high3set);

	cout << "This is the average of the three scores: " << average << endl;

	system("pause");
}