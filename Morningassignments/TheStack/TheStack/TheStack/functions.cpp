#include "Class.h"
#include <iostream>
#include <string>
using namespace std;

int size(int *darray)//Checking the lengh of the array. For function purposes
{
	int z;
	for (int i = 0; i < 50; i++)
	{
		if (darray[i] == 0)
		{
			z = i;
			break;
		}
	}
	return z;
}

int push(int *darray)
{
	int z = size(darray);
	int ch;

	cout << "Enter a number.\n";
	cin >> ch;

	darray[z + 1] = ch;

	return *darray;
}

int pop(int *darray)
{
	int z = size(darray);
	darray[z] = 0;

	return *darray;
}

void peek(int *darray)
{
	for (int i = 0; i < size(darray); i++)
	{
		if (darray[i] == 0)
		{
			cout << darray[i - 1] << endl;
		}
	}
}

void empty(int *darray)
{
	if (darray[0] == 0)
	{
		cout << "The array is empty." << endl;
	}
}

int full(int *darray)
{
	for (int i = 0; i <= size(darray); i++)
	{
		if (darray[i] == 0)
		{
			return *darray;
		}

		else
		{
			continue;
		}
	}
	
	darray = new int[size(darray) + 5];

	return *darray;
}