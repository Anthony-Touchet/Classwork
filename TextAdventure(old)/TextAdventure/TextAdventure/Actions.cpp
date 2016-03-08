#include "Classes.h"
#include <iostream>
#include <string>
using namespace std;

Adv Adv::create(Adv create)//Creating your own character.
{
	cout << "Here you will set your own stats. Health is set for you at 1000. Your defence \nwill block Attack Power but only by half its value. Attack is how much damage \nyou deal. Now your attack and defence stats combined must equal 1000.\n";
	cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a name for yourself.\n";
		cin >> name;

		cout << "Give yourself an attack rating. \n";
		cin >> ap;

		cout << "Give yourself a defence rating. \n";
		cin >> def;

		if (def + ap != 1000)
		{
			cout << "Try again. Remember the defence and attack values together must equal 300. \n";
		}

		else
		{
			break;
		}
	}

	return create;
}

void Adv::print(Adv player)//Printing out the stats for your character.
{
	cout << "Name: " << name << endl;
	cout << "Health: " << hp << endl;
	cout << "Attack: " << ap << endl;
	cout << "Defence: " << def << endl;
}

int Adv::choose()//First choice.

{
	int c;
	cin >> c;
	if (c == 1)
	{
		return 1;
	}

	else if(c == 2)
	{

		return 2;
	}

	else
	{
		cout << "\nWell you couldn't decide and a trap door opened under you. At the bottom were \nspikes and your last words were: 'I should of went left.'\n";
		return 0;
	}
}

Adv Adv::left(Adv player)//Defence increase room.
{
	if (ap >= 600)
	{
		cout << "You have great power to destroy your enimies, but how well can you defend the ones you love. The Gods grant you this blessing to defend yourself " << player.name << "\n";
		player.def = player.def + 300;
		cout << player.name << "'s defence is now " << player.def << endl;
		return player;
	}

	else
	{
		cout << "Your acts of strengh does not please The Gods. You must go and face your enimes.\n";
		return player;
	}
}

Adv Adv::right(Adv player)
{
	if (def >= 600)
	{
		cout << "You have shown that you can protect others, but you can't protect yourself. The Gods have shown mercy, take their blessing "<< player.name << ".\n";
		player.ap = player.ap + 150;
		cout << player.name << "'s attack is now " << player.ap << endl;
		return player;
	}

	else
	{
		cout << "Learn to defend the weak. Only then may The Gods look upon you.\n";
		return player;
	}
}

void Enemy::Goblin::print(Enemy::Goblin foe)
{
	cout << foe.hp << endl;
	cout << foe.def << endl;
	cout << foe.ap << endl;
	cout << foe.name << endl;
}

Enemy::Goblin Enemy::Goblin::getstats(Enemy::Goblin foe)
{
	hp = 300;
	ap = 15;
	def = 100;

	return foe;
}

//Problem? calling the values of hp, def, and ap of both the foe and the player. The stats
//exist within the main code but i can not figure out how to reach for them.
/*Enemy::Goblin Adv::attackGob(Adv player, Enemy::Goblin foe)
{
	foe = foe.getstats(foe);
	cout << player.name << " attacks " << foe.name << endl;
	foe.hp = foe.hp - (player.ap - (foe.def / 2));
	cout << foe.name << "'s helath is now " << foe.hp << endl;

	return foe;
}*/
