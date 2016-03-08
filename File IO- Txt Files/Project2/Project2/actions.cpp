/*CHALLENGE: Add a save game system to your program:
a. Create a SaveGame class which contains at least one int, one float, one bool, and one char*;
b. Initialise these variables to starting values of your choice.
c. Add a command so the user can save the values out to a file called “Save.txt” (overwrite it if it exists and create it if it doesn’t).
d. Add a command to read the save file and put the variables back into the SaveGame class. Then print them to the screen to show that it worked.
e. Test this by editing the .txt file by hand and see if the new values get copied into the class.*/

#include <iostream>
#include <string>
#include <fstream>
#include "Class.h"
using namespace std;

void savegame::save(savegame player)
{
	ofstream save;
	save.open("Save.txt", ios_base::out);

	save << player.health << endl;
	save << player.attack << endl;
	save << player.life << endl;
	save << player.name << endl;
	save.close();
}

void savegame::read()
{
	ifstream save;
	save.open("Save.txt", ios_base::in);
	
	save >> health;
	cout << health << endl;

	save >> attack;
	cout << attack << endl;
	
	save >> life;
	if (life == 1)
	{
		cout << "true\n";
	}

	else
	{
		cout << "false\n";
	}
	save.close();

	/*save >> name;
	for (int i = 0; i <= strlen(name); i++)
	{
		cout << name[i];
	}*/
	cout << "\n";

}