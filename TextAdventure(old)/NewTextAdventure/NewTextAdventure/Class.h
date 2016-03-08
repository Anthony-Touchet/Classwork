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