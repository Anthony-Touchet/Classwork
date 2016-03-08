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
#ifndef ZOMBIE_H_
#define ZOMBIE_H_
#ifndef CELL_H_
#define CELL_H_
using namespace std;

class Zombie;//Initializing the Zombie for access of public items

class Player
{
private:
	int attack;		//Player's Stabbing power
	int ammo;		//Ammo to instantly kill zombies
	int hpPacs;		//Packs of HP to heal the player.
	int position;	//Room that is in.
	int maxHealth; //Maximum amount of health.
	
public:
	int hp;

	Player(int a, int b, int c, int d, int e);	//Player constructor.
	int GetPos();								//Getter for Position.
	int GetHpPacs();							//Getter for Health Packs.	 
	int GetAmmo();								//Getter for Ammo.
	Player SetPos(int, Player *);				//Setting the player's position
	Zombie AttackZom(Zombie);					//Attacking the zombie.
	void CollectAmmo();							//Collecting Ammo from the Cell.
	void CollectHpPacs();						//Collecting healthpacs from the cell.
	void UseHpPac();							//Using a HealthPack after battle.					
	void SaveGame();							//Saving player stats for save file.
	Player GetProgress(Player *);				//Getting player stats from the save file.
};
#endif
#endif