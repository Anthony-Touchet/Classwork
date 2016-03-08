#include "Classes.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Cell g;			//Preformns actions
	Player player;	//Player
	Cell grid[16];	//Grid
	
	//The grid info.
	grid[5] = g.cell({ 1,1 }, false, false, false, true, false, false);
	grid[8] = g.cell({ 2, 0}, false, false, false, true, false, true);
	grid[9] = g.cell({ 2, 1 }, false, false, true, false, false, false);
	grid[10] = g.cell({ 2, 2 }, false, false, false, true, false, false);
	grid[11] = g.cell({ 2, 3 }, false, true, false, false, false, false);
	grid[12] = g.cell({ 3, 0 }, false, false, false, false, true, false);
	grid[13] = g.cell({ 3, 1 }, false, false, false, true, false, true);
	grid[14] = g.cell({ 3, 2 }, false, true, false, false, false, false);
	grid[15] = g.cell({ 3, 3 }, true, false, false, false, false, false);

	player.intro();	//Text introduction

	system("pause");
	system("cls");

	for (int m = 0; m < 300; m++)
	{
		player = player.move(player);	//Moving the player

		if (player.pos.x < 0 || player.pos.y < 0 || player.pos.x > 3 || player.pos.y > 3)	//Off the map prevention
		{
			cout << "You fell off the map. Game over\n";
			system("pause");
			return 0;

		}

		Cell b;		//Substituting cell

		//Setting the Substituting cell
		b.pos.x = player.pos.x;
		b.pos.y = player.pos.y;
		switch (b.pos.x)
		{
		case 1:	//x = 1
			switch (b.pos.y)
			{
			case 1:
				b = b.setvars(b, grid[5]);
				break;
			}
			break;

		case 2:	//x = 2
			switch (b.pos.y)
			{
			case 0:
				b = b.setvars(b, grid[8]);
				break;

			case 1:
				b = b.setvars(b, grid[9]);
				break;

			case 2:
				b = b.setvars(b, grid[10]);
				break;

			case 3:
				b = b.setvars(b, grid[11]);
				break;
			}
			break;

		case 3:	// x = 3
			switch (b.pos.y)
			{
			case 0:
				b = b.setvars(b, grid[12]);
				break;

			case 1:
				b = b.setvars(b, grid[13]);
				break;

			case 2:
				b = b.setvars(b, grid[14]);
				break;

			case 3:
				b = b.setvars(b, grid[15]);
				break;
			}
			break;
		}

		int result = b.checkroom(b);	//Checking the room

		if (result == 1)	//Player died
		{
			break;	
		}

		else   //Player still alive
		{
			player = player.goldcheck(player);			//Has gold?
			int success = player.successcheck(player);	//End goal.

			if (success == 1)
			{
				cout << "Well the Wumpus didn't get you and you have the gold. Good job I guess. Kinda wished you died.\n";
				break;
			}

			if (m % 2 == 0)		//Clearing the screen every second move
				{
					system("pause");
					system("cls");
				}
			b = b.reset(b);		//reset the checker Cell
			continue;
		}		
	}

	system("pause");
	return 0;
}