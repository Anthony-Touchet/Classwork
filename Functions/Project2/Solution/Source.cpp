#include <iostream>

using namespace std;

void sort()
{
	float a;
	float b;

	cin >> a;

	cin >> b;

	if (a < b)
	{
		cout << a;
	}

	else
	{
		cout << b;
	}
}

int main()
{
	cout << "Enter two of any number." << endl;
	

	sort();


	cin.get();
	return 0;
}