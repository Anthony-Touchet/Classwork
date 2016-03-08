#include <iostream>

using namespace std;

char function()
{
	char str[20];

	cout << "Type out a name: \n";
	cin.getline(str, 20);

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
	}
	return str[20];
}

int main()
{	
	char names[3][20];

	char fname = function();

	names[0][20] = fname;

	cout << "Name:\n";

	for (int i = 0; i < strlen(names[0]); i++)
	{
		int s = (char)names[0][i];

		if (i == strlen(names[0]) - 1)
		{
			cout << (char)1 << endl;
		}

		else

		{
			cout << s << endl;
		}
	}

	 
	
	system("pause");
}