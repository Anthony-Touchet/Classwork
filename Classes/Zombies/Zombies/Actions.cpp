/*Create a class representing a zombie.Each zombie should have a health and attack value,
and a previous occupation.Ensure that the zombie’s variables are private and there are
functions to access and modify the zombie’s data.

a.Using the zombie class, create a game in which a small number of zombies attack
each other until only one remains!*/

#include "Zombie.h"
#include <iostream>
#include <string>
using namespace std;

Zombie Zombie::createzom(Zombie create)// Creation Phase
{
	cout << "Give your zombie a previous occupation. \n";
	cin >> occ;

	cout << "Give the Zombie a health rating. \n";
	cin >> hp;

	cout << "Give the Zombie an attack rating. \n";
	cin >> ap;

	return create;
}

void Zombie::print(Zombie zom)// Printing stats
{
	cout << "Zombie's occupation " << zom.occ << endl;
	cout << "Zombie's health: " << zom.hp << endl;
	cout << "Zombie's attack power: " << zom.ap << endl;
}

Zombie Zombie::attack(Zombie att, Zombie aie)//att is the Attacker and aie is the Attacked
{
	cout << att.occ << " attacks " << aie.occ << endl;
	aie.hp = aie.hp - att.ap;
	
	if (aie.hp <= 0)
	{
		cout << aie.occ << " has been slain by " << att.occ << endl;
	}

	else
	{
		cout << aie.occ << "'s health is now at: " << aie.hp << endl;
	}

	cout << "\n";

	return aie;
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