/*Create a class representing a zombie.Each zombie should have a health and attack value,
and a previous occupation.Ensure that the zombie’s variables are private and there are
functions to access and modify the zombie’s data.

a.Using the zombie class, create a game in which a small number of zombies attack
each other until only one remains!*/

#include "Zombie.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int maxzoms = 3;
	Zombie enemy[maxzoms];//Array holding zombies

	for (int i = 0; i < maxzoms; i++)//Creating zombies
	{
		enemy[i] = enemy[i].createzom(enemy[i]);
		cout << "\n";
		enemy[i].print(enemy[i]);
		cout << "\n";
	}

	system("pause");
	system("cls");

	//Battle Phase
	for (int z = 0; z < 300; z++)
	{
		int current = z % maxzoms;//Current cell picking

		if (enemy[current].checkhealth(enemy[current]) <= 0)
		{
			continue;
		}

		enemy[current].attack(enemy, enemy[current], current, maxzoms);//The current cell's attack
		cout << "\n";

		for (int i = 1; i < maxzoms; i++)
		{
			if (enemy[current + i].checkhealth(enemy[current + i]) <= 0)
			{
				continue;
			}

			if (i == maxzoms - 1 && enemy[current + i].checkhealth(enemy[current + i]) <= 0)
			{
				enemy[current].victory(enemy[current]);
				system("pause");
				return 0;
			}

			
		}
		

		if (z % 2 == 0)//Clearing the screen
		{
			system("pause");
			system("cls");
		}
	}
}