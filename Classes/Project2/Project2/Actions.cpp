#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

void mage::Name()
{
	string pName;
	cout << "Enter your character's name. \n";
	cin >> pName;
	cout << "Welcome to hell. \n";
}

void mage::display()
{
	cout << "Player Health:" <<pHealth << "\n" << "Player Magic:" << pMagic << "\n" << "Player Energy:" << pEnergy << "\n";
}