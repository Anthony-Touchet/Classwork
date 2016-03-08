/*
Create a text file that records scores.
create a Function that adds scores to the file.
only keep the 10 highest.
Save them to the file
Order the scores from highest to lowest
Print the newly ordered list to the console
then save it to file
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Actions.h"
using namespace std;

int main()
{
	Create();

	Sorting();

	system("pause");
	return 0;
}