#include "Classes.h"
#include <iostream>
#include <string>
using namespace std;


Player Player::setdir(Player a)//Setting the direction of the player
{
	int d;
	cout << "Choose the way you face with each number:\n1 for North\n2 for South\n3 for East\n4 for West.\n";//Telling the user the input info
	cin >> d;
	switch (d)
	{
	case 1:
		a.direction = 1;//North
		break;

	case 2:
		a.direction = 2;//South
		break;

	case 3:
		a.direction = 3;//East
		break;

	case 4:
		a.direction = 4;//West
		break;

	default://Human element prevention
		cout << "Nice try we are facing you north.";
		a.direction = 1;
		break;
	}

	return a;
}

Player Player::move(Player pos)//Moving the player from one room to another
{
	pos = pos.setdir(pos);//Previous function so we know which way the player is facing so movement is also based on direction facing.
	int m;
	for (int i = 0; i < 20; i++)
	{
		cout << "Facing " << pos.direction << "\n5 to move forward.\n2 to movebackward\n3 to move right\n1 to move left.\n";//User info
		cin >> m;

		switch (pos.direction)
		{
		case 1://North
			switch (m)
			{
			case 5://forward
				pos.pos.y = pos.pos.y + 1;
				break;

			case 2://backward
				pos.pos.y = pos.pos.y - 1;
				break;

			case 3://left
				pos.pos.x = pos.pos.x + 1;
				break;

			case 1://right
				pos.pos.x = pos.pos.x - 1;
				break;

			default://Human element prevention
				cout << "Try again.\n";
				continue;
			}
			break;

		case 2://South
		{
			switch (m)
			{
			case 5://foreward
				pos.pos.y = pos.pos.y - 1;
				break;

			case 2://backward
				pos.pos.y = pos.pos.y + 1;
				break;

			case 3://right
				pos.pos.x = pos.pos.x - 1;
				break;

			case 1://left
				pos.pos.x = pos.pos.x + 1;
				break;

			default://Human element prevention
				cout << "Try again.\n";
				continue;
			}
			break;
		}

		case 3://East
		{
			switch (m)
			{
			case 5://foreward
				pos.pos.x = pos.pos.x + 1;
				break;

			case 2://backward
				pos.pos.x = pos.pos.x - 1;
				break;

			case 3://right
				pos.pos.y = pos.pos.y - 1;
				break;

			case 1://left
				pos.pos.y = pos.pos.y + 1;
				break;

			default://Human element prevention
				cout << "Try again.\n";
				continue;
			}
			break;
		}

		case 4://West
		{
			switch (m)
			{
			case 5://forward
				pos.pos.x = pos.pos.x - 1;
				break;

			case 2://backward
				pos.pos.x = pos.pos.x + 1;
				break;

			case 3://right
				pos.pos.y = pos.pos.y + 1;
				break;

			case 1://left
				pos.pos.y = pos.pos.y - 1;
				break;

			default://Human element prevention
				cout << "Try again.\n";
				continue;
			}
			break;
		}
		}

		cout << "The player is at : " << pos.pos.x << ", " << pos.pos.y << endl;
		return pos;
		}
}

Cell Cell::cell(Position pos, bool go, bool gl, bool p, bool b, bool W, bool s)//Function used to set the grid
{
	Cell a;
	a.pos = pos;//Position
	a.gold = go;//gold
	a.pit = p;//pit
	a.Wumpus = W;//Wumpus
	a.breeze = b;//breeze
	a.stench = s;//stench
	a.glimmer = gl;//glimmer

	return a;
}

Cell Cell::setvars(Cell b, Cell grid)//setiing the variables for the Substituting cell
{
	b.gold = grid.gold;
	b.glimmer = grid.glimmer;
	b.pit = grid.pit;
	b.breeze = grid.breeze;
	b.Wumpus = grid.Wumpus;
	b.stench = grid.stench;
	b.pos = grid.pos;

	return b;
}

Cell Cell::reset(Cell b)//Reseting the substitution cell
{
	b.gold = false;
	b.glimmer = false;
	b.pit = false;
	b.breeze = false;
	b.Wumpus = false;
	b.stench = false;

	return b;
}

int Cell::checkroom(Cell b)//Checking the room.
{
	if (b.stench == true && b.breeze == true)//stench and breez
	{
		cout << "You feel a slight breeze and smell a horrible smell.\n";
		return 0;
	}

	else if (b.glimmer == true && b.breeze == true)//glimmer and breeze
	{
		cout << "You feel a slight breeze and can see a small glimmer of a shiney metal.\n";
		return 0;
	}

	else if (b.glimmer == true && b.stench == true)//glimmer and stench
	{
		cout << "You smell a rank oder but you can see a small glimmer of a shiney metal.\n";
		return 0;
	}

	else if (b.glimmer == true)//Glimmer of hope
	{
		cout << "You can see a glimmer\n";
		return 0;
	}

	else if (b.breeze == true)//Breeze of death
	{
		cout << "You can feel a breeze flowing through the room.\n";
		return 0;
	}

	else if (b.stench == true)//Stench of Decay
	{
		cout << "You can smell an aweful stench in this room.\n";
		return 0;
	}

	else if (b.Wumpus == true)//Wumpus
	{
		cout << "You found the Wumpus and it has eaten you. Game over.\n";
		return 1;
	}

	else if (b.pit == true)//Pit trap
	{
		cout << "You fell down a pit with spikes at the bottom. Game over.\n";
		return 1;
	}

	else//All Clear
	{
		cout << "You're all clear. Nothing dangerous nearby.\n";
		return 0;
	}
}

void Player::intro()//Instructions to the player
{
	cout << "Welcome to The Maze of The Wumpus. The Wumpus is is a smart but smelly creature.He has set pit-traps that have breezes flowing nearby them. The Wumpus himself\ngives off a aweful stench himself that spreads to other rooms. Your goal is to\nsteal the treasure of gold form the Wumpus and get back to the start. You can\nmove horizontally and vertically by 1 space each. We will track where you are inthe maze so you can know where you are. You must also pick a direction to face\neach turn as well.\n";
}

Player Player::goldcheck(Player play)//Setting Player's gold to true.
{
	if (play.pos.x == 3 && play.pos.y == 3)
	{
		cout << "You've got the gold!! Get back to room 0, 0!!\n";
		play.playgold = true;
	}

	return play;
}

Player Player::checkpos(Player play)//Checking the position of the player
{
	play.pos.y = pos.y;
	play.pos.x = pos.x;
	return play;
}

int Player::successcheck(Player play)//Seeing if the player has succeeded in getting the gold
{
	if (play.pos.x == 0 && play.pos.y == 0 && play.playgold == true)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}