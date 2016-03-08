#include <iostream>

using namespace std;

int Half()
{
	float a;
	float result;

	cin >> a;

	result = a / 2;
	
	
	return result;
	cout << result << endl;
}

int main()
{
	cout << "Enter a number of any size." << endl;

	Half();
	
	system ("pause");
	return 0;
}