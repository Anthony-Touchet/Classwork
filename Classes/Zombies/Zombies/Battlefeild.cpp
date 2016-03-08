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
	//Creation of Zombies
	Zombie zom1; 
	zom1.createzom(zom1);
	cout << "\n";
	zom1.print(zom1);

	cout << "\n";

	Zombie zom2;
	zom2.createzom(zom2);
	cout << "\n";
	zom2.print(zom2);

	cout << "\n";

	Zombie zom3;
	zom3.createzom(zom3);
	cout << "\n";
	zom3.print(zom3);

	cout << "\n";

	system("pause");
	system("cls");

	//Battle phase
	for (int i = 0; i < 300; i++)
	{
		//Checks to see who wins
		if (zom3.checkhealth(zom3) <= 0 && zom2.checkhealth(zom2) <= 0)//Zom1 wins
		{
			zom1.victory(zom1);
			system("pause");
			break;
		}

		if (zom3.checkhealth(zom3) <= 0 && zom1.checkhealth(zom1) <= 0)//Zom2 wins
		{
			zom2.victory(zom2);
			system("pause");
			break;
		}

		if (zom1.checkhealth(zom1) <= 0 && zom2.checkhealth(zom2) <= 0)//Zom3 wins
		{
			zom3.victory(zom3);
			system("pause");
			break;
		}

		if (zom1.checkhealth(zom1) <= 0 && zom2.checkhealth(zom2) <= 0 && zom3.checkhealth(zom3) <= 0)//No one wins. Just in case for some strange circumstance.
		{
			cout << "Well the all killed each other. Don't know how though.\n";
			system("pause");
			break;
		}


		//Zombie 1 Attacks
		if (zom1.checkhealth(zom1) > 0)//Still alive Zom1?
		{
			if (zom2.checkhealth(zom2) <= 0)//First target is dead
			{
				zom3 = zom1.attack(zom1, zom3);//Secondary target
			}

			else//Only attack if only alive
			{
				zom2 = zom1.attack(zom1, zom2);//Primary target
			}
		}

		//Zombie 2 Attacks
		if (zom2.checkhealth(zom2) > 0)//Still alive Zom2?
		{
			if (zom3.checkhealth(zom3) <= 0)//First target is dead
			{
				zom1 = zom2.attack(zom2, zom1);//Secondary target
			}

			else//Only attack if only alive
			{
				zom3 = zom2.attack(zom2, zom3);//Primary target
			}
		}

		//Zombie 3 attacks
		if (zom3.checkhealth(zom3) > 0)//Still alive Zom3?
		{
			if (zom1.checkhealth(zom1) <= 0)//First target is dead
			{
				zom2 = zom3.attack(zom3, zom2);//Secondary target
			}

			else//Only attack if only alive
			{
				zom1 = zom3.attack(zom3, zom1);//Primary target
			}
		}	
		
		system("pause");
		system("cls");
	}
	
	return 0;
}