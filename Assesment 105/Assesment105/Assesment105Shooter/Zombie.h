/*
Anthony Touchet
#1085
Due Date: 10/20/15

Create a program that impliments the following: Dynamic memory, IO files, classes,
Develop Algorithims, Conform to a breif and create content within the limitations,
Creating in object oriented design, and submmit documentation.
*/

#include <iostream>
#include <string>
#ifndef PLAYER_H_
#define PLAYER_H_
using namespace std;

class Player;	//Initalizing the player for access of public items

class Zombie	//Base Zombie Stats
{
private:
	int attack = 10;	//Zombie's attacking power

public:
	int hp = 70;	//Base Health
	int name;		//So the player can tell which zombie is which

	Zombie CreateZombie(int);		//Creating zombies to fight
	Player AttackPlayer(Player*);	//Attacking the player
};
#endif