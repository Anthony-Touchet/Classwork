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

Player Create()
{
	Player create;

	cout << "Enter a name for this character. \n";
	cin >> create.Name;

	cout << "Enter a score for this character. \n";
	cin >> create.Score;

	return create;
}
int main()
{
	Player names[5][20];
	for (int i = 0; i < 5; i++)
	{
		Player create = Create();
		names[i] = create.Name;
	}
	
	for (int z = 0; z < 5; z++)
	{
		names[z];
		cout << "Player: " << create.Name << "" << "Power Level: " << create.Score << endl;
	}

	system("pause");
}