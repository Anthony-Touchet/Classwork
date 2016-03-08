//Write a function RevString(char* array) which reverses array. The function returns nothing.

#include <iostream>
#include <string>
using namespace std;

void RevString(char *array)//Part A Function
{
	char temp;
	for (int i = 0, z = strlen(array) - 1; i < strlen(array) / 2; i++, z--)
	{
		temp = array[z];
		array[z] = array[i];
		array[i] = temp;
	}
}

int main()
{
	char array[12] = { 'H', 'e', 'l', 'l' };

	RevString(array);

	cout << array << endl;


	system("pause");

	return 0;
}