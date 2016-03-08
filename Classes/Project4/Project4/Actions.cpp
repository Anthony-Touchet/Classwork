#include "HighScores.h"
#include <iostream>
#include <string>
using namespace std;

int highscores::geths1()
{
	int hs1;
	cout << "Enter the first score. \n";
	cin >> hs1;

	return hs1;
}

int highscores::seths1(int high1)
{
	hsc1 = high1;
	return hsc1;
}

int highscores::geths2()
{
	int hs2;
	cout << "Enter the first score. \n";
	cin >> hs2;

	return hs2;
}

int highscores::seths2(int high2)
{
	hsc2 = high2;
	return hsc2;
}

int highscores::geths3()
{
	int hs3;
	cout << "Enter the first score. \n";
	cin >> hs3;

	return hs3;
}

int highscores::seths3(int high3)
{
	hsc3 = high3;
	return hsc3;
}

int highscores::average(int a, int b, int c)
{
	int av;
	av = (a + b + c) / 3;
	return av;
}