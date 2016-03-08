/*1. Create a struct to represent a Warrior/Fighter type class/job. 
It should have at the least the following properties.
hp, <a resource> this can be energy, mana w/e, attack power, defense, armor

1. Write a function that will create and setup this struct.
2. Write a function to compute the average hp of two fighters, you must pass two 
fighters into this function and return an integer.*/

#include <iostream>
#include <string>
using namespace std;

struct warrior
{
	string name;
	int hp = 200;
	int mana = 50;
	int ap = 150;//Attack Power.
	int def = 100;//Defence
	int arm = 120;//Armor
};

warrior naming(warrior player)
{
	cout << "Enter a name for your Warrior. \n";
	cin >> player.name;

	return player;
}

float average(int hp1, int hp2)
{
	int av;
	av = (hp1 + hp2) / 2;

	return av;
}

int main()
{
	float av;
	warrior player1;
	naming(player1);

	cout << "Player HP: " << player1.hp << endl;
	cout << "Player Mana: " << player1.mana << endl;
	cout << "Player Attack power: " << player1.ap << endl;
	cout << "Player Defence: " << player1.def << endl;
	cout << "Player Armor: " << player1.arm << endl;

	cout << "\n";


	warrior player2;
	naming(player2);

	cout << "Player HP: " << player2.hp << endl;
	cout << "Player Mana: " << player2.mana << endl;
	cout << "Player Attack power: " << player2.ap << endl;
	cout << "Player Defence: " << player2.def << endl;
	cout << "Player Armor: " << player2.arm << endl;

	cout << "\n";

	av = average(player1.hp, player2.hp);

	cout << "The average of these two fighters health is: " << av << endl;

	system("pause");
}