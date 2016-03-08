#include <iostream>

using namespace std;

void sorting(char name[10], int lengh)
{
	char str[10];
	int s = 0;
	cout << "Type out a name: \n";
	cin.getline(str, 10);

	for (int i = 0; i < strlen(str); i++)
	{
		int s = (char)str[i];

		if (i == strlen(str) - 1)
		{
			cout << (char)1 << endl;
		}

		else

		{
			cout << s << endl;
		}	

		s == name[i];
	}

	return;
			
}

int main()
{
	char full[3][10];
	char first[10];

	sorting(first, 0);// Now the transfer. Well we cant just print numbers. lets see.

	for (int m = 0; m < strlen(first); m++)
	{
		cout << first[m] << endl;
	}

	system("pause");
}