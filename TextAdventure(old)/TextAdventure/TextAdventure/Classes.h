#include <iostream>
#include <string>
using namespace std;

class Adv
{
private:
	string name;
	int hp = 1000;//Health
	int ap;//Attack Power
	int def;//Defence

public:
	Adv create(Adv create);
	void print(Adv create);
	int choose();
	Adv left(Adv player);
	Adv right(Adv player);
};

class Enemy
{
public:

	class Goblin
		{
		private:
			string name = "Goblin";
			int hp = 300;
			int ap = 15;
			int def = 100;
		public:
			Enemy::Goblin getstats(Enemy::Goblin foe);
			void print(Enemy::Goblin foe);
		};

		class Troll
		{
		private:
			string name = "Troll";
			int hp = 600;
			int ap = 200;
			int def = 300;
		};
};
	

	class GA
	{
	public:
		
	};