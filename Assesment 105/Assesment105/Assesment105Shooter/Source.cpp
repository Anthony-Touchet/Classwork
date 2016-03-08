/*
Anthony Touchet
#1085
Due Date: 10/20/15

Create a program that impliments the following: Dynamic memory, IO files, classes, 
Develop Algorithims, Conform to a breif and create content within the limitations,
Creating in object oriented design, and submmit documentation.
*/

#include "Player.h"
#include "Zombie.h"
#include "Cell.h"

int main()
{
	//Intro
	cout << "Hello User, my name is CID, sorry but opening this application has sent out a\nbunch of digital Zombies to your computer. Don't fear though, after you hit any button you'll be sent to combat them. By My calculations there will be about 30 or so waves of these enemies. Lucky for you I've sent out health packs and ammo\nat regular intervals as well. Now, I'll help you by keeping track of your stats.Can't have your computer trashed by Zombies.\n\n";
	Cell *currentCell = new Cell(true, 1, false, false);	//Setting the begining cell. This cell Will change as the player progresses.
	Player *player= new Player(10000, 35, 2, 1, 1);			//Setting the player's stats.
	
	*player = player->GetProgress(player);	//If a saved txt file exists, the program can grab it and set the player's stats to the last save.
	*currentCell = currentCell->GetProgress(currentCell);

	system("pause");
	system("cls");							//Pausing and clearing the screen.

	int pos = player->GetPos();		//Setting Wave to initial  wave of enemies. We just want the initial, no other positions.
	for (int a = pos; a < 31; a++)	//Loop to go through each wave and is based off the player's initial position
	{
		cout << "Wave " << a << endl;								//Indicating what wave player is on
		*currentCell = currentCell->ChangeRoom(a, currentCell);		//Telling the cell what variables are true or false.
		*player = currentCell->Actions(player);						//This functions handles battling and collecting of resources.
		if (player->hp <= 0)										//if player dead, he died on wave x
		{
			cout << "You have died on wave " << a << ".\n";
			system("pause");
			return 0;
		}
		
		player->SetPos(a, player);	//Setting the player's position to that of the current wave for save purposes.

		cout << "Would you like to save your Progress? Hit 1 for yes. Or any other key for no.\n";
		int c; cin >> c;			//Asking if the user wants to save or not.

		if (c == 1)
		{
			player->SaveGame();//Game saved through a text file.
			currentCell->SaveGame();
		}

		system("pause");
		system("cls");
	}

	//Ending Remarks
	cout << "Congrats User, you have passed through all the waves and your computer is safe\nfrom Zombies!" << (char)1 << endl;

	system("pause");
	return 0;
}