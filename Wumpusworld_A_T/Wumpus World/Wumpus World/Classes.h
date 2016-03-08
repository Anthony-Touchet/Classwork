#include <iostream>
#include <string>
using namespace std;

struct Position
{
	int x;	//x axis, Colums
	int y;	//y axis, Rows
};

class Player
{
private:
	Position stpos = { 0,0 };
	bool playgold = false;	//Player has gold?

public:
	Position pos = stpos;				//Position
	Player move(Player pos);			//Moving the player
	int direction = 1;					//Defult Direction
	Player setdir(Player a);			//Setting direction
	void intro();						//Introduction
	Player goldcheck(Player play);		//Checking for Gold
	Player checkpos(Player play);		//Checking player position
	int successcheck(Player play);		//Has the player won?
};

class Cell
{
private:
	bool gold;			//Room has Gold?
	bool glimmer;		//Room has a Glimmer?
	bool pit;			//Room has a pit?
	bool breeze;		//Room has a Breeze?
	bool Wumpus;		//Room has the Wumpus?
	bool stench;		//Room has a stench?

public:
	Position pos;//Cell Position

	Cell cell(Position pos, bool go, bool gl, bool p, bool b, bool W, bool s ); //Creating room properties
	Cell setvars(Cell b, Cell grid);											//Setting the variables for rooms
	int checkroom(Cell b);														//Checking the room
	Cell reset(Cell b);															//Reseting the substitution Cell
};