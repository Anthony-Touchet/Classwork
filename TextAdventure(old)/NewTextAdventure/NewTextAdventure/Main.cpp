#include "Class.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Adv pla;// The Player

	cout << "Welcome Adventurer.\n";//Introduction

	cout << "\n";

	pla.create(pla);

	cout << "\n";

	pla.print(pla);

	cout << "\n";

	cout << "You come to a set of two doors. The one left has a dark ominous feel to it. You can actually see the shadows try to reach outside under the door. \n \nThe Right Door has a glow of light around its edges. The door feels warm and \ninviting when you are near it.\n\n Choose your door: 1 to enter the left door. 2 to enter the right.\n";

	int c;
	c = pla.choose();

	cout << "\n";

	if (c == 1)
	{
		pla = pla.left(pla);
	}

	else if (c == 2)
	{
		pla = pla.right(pla);
	}

	else
	{
		system("pause");
		return 0;
	}

	cout << "\n";

	pla.print(pla);

	system("pause");

	return 0;
}