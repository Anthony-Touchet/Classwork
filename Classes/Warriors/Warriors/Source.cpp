#include"Boss.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	War war1;
	war1.create(war1);
	cout << "\n";

	War war2;
	war2.create(war2);
	cout << "\n";

	float av;
	int hp1;
	int hp2;

	hp1 = war1.checkhealth(war1);
	hp2 = war2.checkhealth(war2);

	av = war1.average(hp1, hp2);

	cout << "The average of the two warrior's health is: " << av << endl;


	system("pause");
}