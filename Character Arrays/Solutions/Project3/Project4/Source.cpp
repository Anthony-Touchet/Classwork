#include <iostream>

using namespace std;

int main()
{
	const int maxnames = 5;// Setting a maximum of names.

	char names[maxnames][50];// Array of arrays

	for (int x = 0; x < maxnames; x++)// Attaining names and placing them within the array.
	{
		char name[50];
		cout << "Enter a name and hit enter to confirm names. \n";
		cin.getline(name, 50);
		for (int y = 0; y < 50; y++)
		{
			names[x][y] = name[y];
		}
	}

	for (int x = 0; x < 5; x++)
	{
		cout << "Sir/ Madam: " << x << ": ";
		for (int y = strlen(names[x]); y >= 0; y--)// Reversing the arrays. Saying y is the maximum value of that array, printing that character and decreaseing y's value untill all the values are printed.
		{
			cout << names[x][y];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}