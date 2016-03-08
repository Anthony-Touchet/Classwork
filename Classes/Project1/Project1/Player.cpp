#include "Player.h"
#include <iostream>

void player::displayname()
{
	std::cout << Name << std::endl;
}

player::player()
{
	Name = "sam";
}