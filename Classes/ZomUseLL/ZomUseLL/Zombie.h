/*Create a class representing a zombie.Each zombie should have a health and attack value,
and a previous occupation.Ensure that the zombie’s variables are private and there are
functions to access and modify the zombie’s data.

a.Using the zombie class, create a game in which a small number of zombies attack
each other until only one remains!*/

#include <iostream>
#include <string>
using namespace std;

class Zombie
{
private:
	int hp; //Health of the Zombie
	int ap; // Attaking Power
	string occ; // Occupation

public:
	Zombie createzom(Zombie arraycell);// Creation Phase
	void print(Zombie create);// Printing stats
	Zombie attack(Zombie arry[], Zombie current, int currnum, const int maxzoms);// Command for Attacking
	int checkhealth(Zombie zom);//Checking for health
	void victory(Zombie zom);
	void slain(Zombie zom);
};