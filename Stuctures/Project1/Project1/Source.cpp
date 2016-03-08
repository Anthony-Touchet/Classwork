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
	int Score;
	Position P;
	Velocity V;
};


int main()
{
	Player Cid = { "Cid", 5100, {.75f, 18.3f}, {6.3f, 5.6f} };

	cout << "Name: \n" << Cid.Name << endl;
	cout << "Score: \n" << Cid.Score << endl;
	cout << "Position: \n" << Cid.P.x << ", " << Cid.P.y << endl;
	cout << "Velocity: \n" << Cid.V.size << ", " << Cid.V.direction << endl;
	

	system("pause");
}