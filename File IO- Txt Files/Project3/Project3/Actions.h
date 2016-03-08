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
using namespace std;

void Create()
{	
	int scores[15];
	ofstream scoref;
	scoref.open("Scores.txt", ios_base::out);

	for (int i = 0; i < 15; i++)
	{
		cout << "Enter a score.\n";
		cin >> scores[i];
		scoref << scores[i] << endl;
	}

	cout << "\n";

	scoref.close();
}

 void Sorting()
{
	ifstream scoref;
	scoref.open("Scores.txt", ios_base::in);
	int scores[15];

	for (int i = 0; i < 15; i++)
	{
		scoref >> scores[i];
		scores[i] = scores[i];
	}


	int i, j, flag = 1;//Bubble Sorting. flags mar each pass
	int temp;//Temperary variable          
	
	for (i = 1; i <= 15 && flag; i++)
	{
		flag = 0;
		for (j = 0; j < (15 - 1); j++)
		{
			if (scores[j + 1] > scores[j])      
			{
				temp = scores[j];             
				scores[j] = scores[j + 1];
				scores[j + 1] = temp;
				flag = 1;               
			}
		}
	}
	scoref.close();

	ofstream scoreo;
	scoreo.open("Scores.txt", ios_base::out);
	for (int i = 0; i < 10; i++)
	{
		scoreo << scores[i] << endl;
		cout << scores[i] << endl;
	}

	scoref.close();
}