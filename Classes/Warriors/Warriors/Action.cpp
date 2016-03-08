#include"Boss.h"
#include <iostream>
#include <string>
using namespace std;

War War::create(War create)//Creation Phase
{
	cout << "Enter this warrior's name. \n";
	cin >> name;

	cout << "Enter this warrior's health. \n";
	cin >> hp;

	return create;
}

float War::average(int hp1, int hp2)
{
	float av;
	av = (hp1 + hp2) / 2;

	return av;
}

int War::checkhealth(War num)
{
	int hp = num.hp;
	return hp;
}