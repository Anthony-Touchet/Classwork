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
	Zombie createzom(Zombie create);// Creation Phase
	void print(Zombie create);// Printing stats
	Zombie attack(Zombie attacker, Zombie attackie);// Command for Attacking
	int checkhealth(Zombie zom);//Checking for health
	void victory(Zombie zom);
};
