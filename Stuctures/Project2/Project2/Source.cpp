#include <iostream>

using namespace std;

struct Position
{
	float x;
	float y;
};

struct Velocity
{
	float size;
	float direction;
};

struct Player
{
	char Name[10];
	int Health;
	int Score;
	Position p;
	Velocity v;
};


int main()
{
	Player Cid;
	cout << "Enter a name for your character. \n";
	cin >> Cid.Name;

	cout << "Enter a score for your character. \n";
	cin >> Cid.Score;

	cout << "Player Name: " << Cid.Name << endl;
	cout << "Player Score: " << Cid.Score << endl;
	system("pause");
}