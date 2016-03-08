/*CHALLENGE: Add a save game system to your program:
a. Create a SaveGame class which contains at least one int, one float, one bool, and one char*;
b. Initialise these variables to starting values of your choice.
c. Add a command so the user can save the values out to a file called “Save.txt” (overwrite it if it exists and create it if it doesn’t).
d. Add a command to read the save file and put the variables back into the SaveGame class. Then print them to the screen to show that it worked.
e. Test this by editing the .txt file by hand and see if the new values get copied into the class.*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class savegame
{
private:
	int health = 100;
	float attack = 18.2;
	bool life = true;
	char* name{ "Cid" };

public:
	void save(savegame player );
	void read();
};