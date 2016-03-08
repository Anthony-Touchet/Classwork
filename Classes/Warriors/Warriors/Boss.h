/* Create a class to represent a Warrior/Fighter type class/job. 
It should have at the least the following properties.
hp, <a resource> this can be energy, mana w/e, attack power, defense, armor

1. Write a function that will create and setup this class.
2. Write a function to compute the average hp of two fighters, you must pass two fighters into this function and return an integer.*/

#include <iostream>
#include <string>
using namespace std;

class War
{
private:
	string name;
	int hp;
	int energy = 1;
	int ap = 1;
	int def = 1;
	int arm = 1;

public:
	War create(War create);
	float average(int hp1, int hp2);
	int checkhealth(War num);
};
