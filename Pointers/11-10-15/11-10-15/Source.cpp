/*
Anthony Touchet
*/

using namespace std;
#include <iostream>

int main()
{
	int var;
	int *pointer = &var;
	*pointer = 10;

	cout << *pointer << endl;	//Pointer to value.
	cout << var << endl;		//original value.
	cout << pointer << endl;

	cout << "\n";

	int *pointer2 = &var;
	*pointer2 = 13;

	cout << *pointer2 << endl;	//Second Pointer to value.
	cout << var << endl;		//original value.
	cout << *pointer << endl;	//Changes because original value is changed.

	pointer = 025136;

	system("pause");
	return 0;
}