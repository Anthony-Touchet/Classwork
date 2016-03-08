#include <iostream>

using namespace std;

int main()
{
	bool caps;
	bool num;
	bool sym;
	char use[15];//Username
	char pass[20];//Password

	cout << "Enter a user name: \n"; //Getting User Name
	cin.getline(use, 15);

	for (int i = 0; i <= strlen(use); i++)
	{
		if ((char)use[15] && ((char)117 && (char)115 && (char)114))
		{
			cout << use << "  Name confirmed." << endl;
			break;
		}

		else
		{
			cout << "Use usr within your username. \n";
			system("pause");
			return 0;
		}
	}
	
	cout << "Enter a Password: \n";//Getting Password
	cin >> pass;

	if (strlen(pass) > 7)//Testing Password (Lengh)
	{
		for (int w = 0; w <= strlen(pass); w++)
		{
			if ((char)pass[w] >= 65 && (char)pass[w] <= 90) //Testing for Caps
			{
				caps = true;
			}
			else if ((char)pass[w] >= 33 && (char)pass[w] <= 47) // Testing for symbols
			{
				sym = true;
			}
			else if ((char)pass[w] >= 58 && (char)pass[w] <= 64)// Testing for symbols
			{
				sym = true;
			}
			else if ((char)pass[w] >= 48 && (char)pass[w] <= 57)// Testing for numbers
			{
				num = true;
			}
		}
	}

	else
	{
		cout << "Choose a longer password next time. \n";
	}


	if (sym == true && caps == true && num == true)
	{
		cout << " Password Accepted. Welcome to heaven.";
	}

	else
	{
		cout << "Nope, try again.";
	}

	system("pause");
}