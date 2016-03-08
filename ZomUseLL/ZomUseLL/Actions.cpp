/*Create a class representing a zombie.Each zombie should have a health and attack value,
and a previous occupation.Ensure that the zombie’s variables are private and there are
functions to access and modify the zombie’s data.

a.Using the zombie class, create a game in which a small number of zombies attack
each other until only one remains!*/

#include "Zombie.h"
#include <iostream>
#include <string>
using namespace std;

Zombie Zombie::createzom(Zombie arraycell)// Creation Phase
{
	cout << "Give your zombie a previous occupation. \n";
	cin >> arraycell.occ;

	cout << "Give the Zombie a health rating. \n";
	cin >> arraycell.hp;

	cout << "Give the Zombie an attack rating. \n";
	cin >> arraycell.ap;

	return arraycell;
}

void Zombie::print(Zombie zom)// Printing stats
{
	cout << "Zombie's occupation: " << zom.occ << endl;
	cout << "Zombie's health: " << zom.hp << endl;
	cout << "Zombie's attack power: " << zom.ap << endl;
}

Zombie Zombie::attack(Zombie arry[], Zombie current, int currnum, const int maxzoms)//The whole array, The current cell, and current cell's number, max zoms
{
	for (int i = 1; i < maxzoms; i++)
	{
		int select = (i + currnum) % maxzoms;//Int used to select the next cell

		if (arry[select].checkhealth(arry[select]) > 0)//Checking to see if the next zombie has health
		{
			cout << current.occ << " attacks " << arry[select].occ << endl;//Attack Dialouge
			arry[select].hp = arry[select].hp - current.ap;//The actual attack

			if (arry[select].hp <= 0)//If killed
			{
				cout << arry[select].occ << " has been slain by " << current.occ << endl;
			}

			else//still alive
			{
				cout << arry[select].occ << "'s health is now at: " << arry[select].hp << endl;
			}
			break;
		}

		else//If zom has no health go to next.
		{
			continue;
		}
	}

	return arry[maxzoms];//Return whole array
}

int Zombie::checkhealth(Zombie zom)//Checking for health
{
	int hp;
	hp = zom.hp;
	return hp;
}

void Zombie::victory(Zombie zom)
{
	cout << zom.occ << " has slain all other zombies.\n";
}

void Zombie::slain(Zombie zom)
{
	cout << zom.occ << " has been slain.\n";
}