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
#include <fstream>
#define ZOMBIE_H_
#define PLAYER_H_

class Cell {
private:
	bool enemies;	//Are there Zombies in this cell
	int numZombie;	//If above is true, how many
	bool isAmmo;	//Is there ammo in the room
	bool hpPacs;	//Are there Health Packs in the room?

public:
	Cell(bool, int, bool, bool);	//Cell constructor
	Player Actions(Player *);		//Location of the fighting and collecting of resources
	Cell ChangeRoom(int, Cell *);	//Setting the room to new values
	void SaveGame();
	Cell GetProgress(Cell *);
};
