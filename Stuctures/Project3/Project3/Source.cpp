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
	Player Cid;

		cout << "Enter a name for your character. \n";
		cin >> Cid.Name;

		cout << "Enter a score for your character. \n";
		cin >> Cid.Score;

		
		return Cid;
}
int main()
{
	Player Cid = Create();
	
	cout << "Player Name: " << Cid.Name << endl;
	cout << "Player Score: " << Cid.Score << endl;

	Player Auron = Create();

	cout << "Player Name: " << Auron.Name << endl;
	cout << "Player Score: " << Auron.Score << endl;

	cout << "Player Name: " << Cid.Name << endl;
	cout << "Player Score: " << Cid.Score << endl;
	system("pause");
}