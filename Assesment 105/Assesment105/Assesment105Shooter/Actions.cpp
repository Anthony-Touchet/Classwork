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

Zombie Zombie::CreateZombie(int a)	//Used to create zombies
{
	Zombie create;
	create.name = a;
	return create;
}

Player::Player(int mHp ,int att, int am, int hpP, int po)	//Player constructor
{
	hp = mHp;
	maxHealth = mHp;
	attack = att;
	ammo = am;
	hpPacs = hpP;
	position = po;
}

Cell::Cell(bool en, int nz, bool am, bool hpp)	//Cell constructor
{
	enemies = en;
	numZombie = nz;
	isAmmo = am;
	hpPacs = hpp;
}

void Player::CollectAmmo()//Getting Ammo from the room
{
	this->ammo = this->ammo + 3;
}

int Player::GetPos()	//Getter for Player position
{
	return position;
}

int Player::GetAmmo()	//Getter for player Ammo
{
	return ammo;
}

int Player::GetHpPacs()	//Getter for player health packs
{
	return hpPacs;
}

Player Player::SetPos(int a, Player * play)
{
	play->position = a + 1;
	return *play;
}

void Player::CollectHpPacs()				//Collecting a Health Pack from the room
{
	this->hpPacs = this->hpPacs + 1;
}

void Player::UseHpPac()						//Using a health Pack
{
	if (hpPacs > 0)							//If player has health packs
	{
		hp = hp + 50;						//Health healed by 50

		if (hp > maxHealth)					//Prevents health from going up by a certain value.
		{
			hp = maxHealth;
		}

		cout << "Your Hp is: " << hp << endl;
		this->hpPacs = this->hpPacs - 1;	//Getting rid of health pack used
	}

	else
	{
		cout << "You have no Health Packs.\n";
	}
	
}

Player Zombie::AttackPlayer(Player *player)	//Zombie attacking the player.
{
	cout << "Zombie " << this->name << " attacks you.\n";	//User Communication
	player->hp = player->hp - this->attack;					//Player attacked by Zombie
	cout << "Your Health is at: " << player->hp << "hp.\n";	//User Communication
	cout << "\n";
	return *player;											//Return new player after attack
}

Zombie Player::AttackZom(Zombie zom)
{
	if (this->ammo > 0)
	{
		for (int i = 0; i < 1000; i++)		//Purely for human error
		{
			cout << "Hit 1 to stab.\nHit 2 to shoot.\n";
			int c;							//Choice, shoot or stab
			cin >> c;

			switch (c)
			{
			case 1:													//Just stabbing  the Zombie
				cout << "You attack Zombie " << zom.name <<".\n";	//Prompt
				zom.hp = zom.hp - this->attack;						//Player attacking Zombie
				if (zom.hp > 0)										//Telling the player what the zombie's health is 
				{
					cout << "Zombie " << zom.name << " is at " << zom.hp << "hp.\n";
				}
				
				cout << "\n";
				return zom;		//Return new zombie

			case 2://Bullets are a one hit kill
				cout << "You shoot Zombie " << zom.name << endl;
				zom.hp = 0;						//Killing the Zombie
				this->ammo = this->ammo - 1;	//Rid of bullet just Used

				if (this->ammo > 0 && this->ammo != 1)//telling you how much ammo you have
				{
					cout << "You have " << this->ammo << " bullets left.\n";
				}

				if (this->ammo == 1)//Saying you only have one bullet left
				{
					cout << "Last bullet, make it count.\n";
				}

				if (this->ammo == 0)//You have run out of bullets.
				{
					cout << "You have run out of bullets.\n";
				}
				
				cout << "\n";
				return zom;

			default://Human error preventor.
				cout << "Try again\n";
				break;
			}
		}

		cout << "Well don't just stand there! Fight!\n";
		return zom;
	}

	else //If you have no bullets
	{
		cout << "You attack Zombie " << zom.name << ".\n";	//Prompt
		zom.hp = zom.hp - this->attack;						//Player Attacks zom
		if (zom.hp > 0)										//Zom's HP
		{
			cout << "Zombie " << zom.name << " is at " << zom.hp << "hp.\n";
		}
		return zom;
	}
}

Player Cell::Actions(Player *play)//Battling, Collecting Resources, and Saving
{
	//Battle phase if zombies exist
	if (this->enemies == true)//If zombies exist, which is always in this case.
	{
		Zombie * army;
		army = new Zombie[this->numZombie];//Array to hold our zombies for battle

		for (int i = 0; i < this->numZombie; i++)//Creating zombies until array can not hold any more
		{
			army[i] = army[i].CreateZombie(i);
		}

		cout << "Get ready for battle.\n\n";
		for (int num = 0; num < numZombie; num++)//Cycling through each Zombie
		{
			int zomRemain = numZombie - num;//Number of remaining zombies
			cout << "Zombies remaining: " << zomRemain << endl;
			for (int b = 0; b < 50; b++)//Actual battle between man and Undead
			{
				*play = army[num].AttackPlayer(play);//Zombie attacks player
				if (play->hp <= 0)//If player is dead, stop Actions.
				{
					return *play;
				}

				army[num] = play->AttackZom(army[num]);//Player attacks Zombie
				if (army[num].hp <= 0)//If zombie is dead, move to next zombie
				{
					cout << "Zombie " << army[num].name << " has been slain.\n";
					system("pause");
					system("cls");
					break;
				}
				system("pause");
				system("cls");
			}
		}
		delete[] army;//Delete array, don't need it no more
	}	
	//Collect Resources
	cout << "Ok look around for supplies.\n\n";

	if (this->isAmmo == true)//If ammo present, you can pick it up
	{
		int c;
		cout << "Pick up some ammo? Press 1 for yes.\n";
		cin >> c;

		if (c == 1)//Picking up ammo
		{
			cout << "You picked up 3 bullets.\n\n";
			play->CollectAmmo();	//Collecting the Ammo
			cout << "\n";
		}

		else//Passing up the ammo.
		{
			cout << "Idiot! Who passes up instant-kill ammo?!\n\n";
		}
	}

	if (this->hpPacs == true)//If Health Packs
	{
		int c;
		cout << "Pick up some health packs? Press 1 for yes.\n";
		cin >> c;

		if (c == 1)//Picking up health pack
		{
			cout << "You picked up a health pack.\n\n";
			play->CollectHpPacs();
			cout << "\n";
		}

		else//Passing up health pack
		{
			cout << "Idiot! Who passes up Health?!\n";
		}
	}

	if (this->hpPacs == false && this->isAmmo == false)//If there is no ammo or health packs
	{
		cout << "There are no resources in this room.\n\n";
	}

	if (play->GetHpPacs() > 0)//Using healthpacks if player has at least 1.
	{
		cout << "Would you like to use a health pack? Press 1 for yes.\n";
		int h;
		cin >> h;

		if (h == 1)//Actual use of health pack
		{
			cout << "GG bro. Get that health up.\n\n";
			play->UseHpPac();
		}

		else//Not using health Pack
		{
			cout << "Alright, your funeral.\n\n";
		}
	}
	
	system("pause");
	system("cls");
	return *play;
}

Cell Cell::ChangeRoom(int a, Cell * cell)//Setting the room to a
{
	if (a % 6 == 0)//Every 6th wave, ammo will be collectable after battle
	{
		cell->isAmmo = true;
	}

	else//All other cells will not have ammo
	{
		cell->isAmmo = false;
	}

	if (a % 10 == 0)//After every tenth wave, add another zombie to the battle permanently
	{
		cell->numZombie = cell->numZombie + 1;
	}

	if (a % 5 == 0)//At evey 5th wave, a Health Pack will be available   for pickup.
	{
		cell->hpPacs == true;
	}

	else//all other cells will not have Health Packs
	{
		cell->hpPacs = false;
	}

	return *cell;
}

void Player::SaveGame()//Saving the stats of the player 
{
	ofstream save;
	save.open("Progress.txt", ios_base::out);//Writing new file or over existing file

	save << position << endl;//Saving the position of the wave the player is on at save.
	save << hp << endl;//Saving Player HP
	save << hpPacs << endl;//Saving the number of Health Packs
	save << ammo << endl;//Saving player ammo

	save.close();//Closing file

	cout << "Your progress has been saved.\n";
}

void Cell::SaveGame()
{
	ofstream save;
	save.open("Progress.txt", ios_base::app);

	save << numZombie << endl;

	save.close();
}

Player Player::GetProgress(Player * play)
{
	cout << "Would you like to use a previous save?\nHit 1 and Enter for yes.\nAny other key for no.\n";
	int cc; cin >> cc;	//Asking is the player would like to use the previous save file
	if (cc == 1)		//Using old save
	{
		ifstream file;
		file.open("Progress.txt", ios_base::in);//Open 
		if (file.is_open())//if file exists
		{

			file >> position;//Takes from file.
			play->position = position;//Sets player stat to new stat.

			file >> hp;
			play->hp = hp;

			file >> hpPacs;
			play->hpPacs = hpPacs;

			file >> ammo;
			play->ammo = ammo;

			file.close();
			cout << "Welcome back user. Ready to fight that digital horde off your computer?" << (char)1 << endl;
			return *play;
		}
	
		else//File does not exist.
		{
			cout << "A previous save does not exist. We will start a new game.\n";
			file.close();
			return *play;
		}
	}

	else//Brand new game
	{
		cout << "Ok, new game then.\n";
		return *play;
	}
		
}

Cell Cell::GetProgress(Cell * cell)
{
	ifstream file;
	file.open("Progress.txt", ios_base::in);//Open 
	if (file.is_open())//if file exists
	{
		file.seekg(EOF);
		file >> numZombie;//Takes from file.
		cell->numZombie = numZombie;//Sets player stat to new stat.

		file.close();
		return *cell;
	}

	else//File does not exist.
	{
		file.close();
		return *cell;
	}
}