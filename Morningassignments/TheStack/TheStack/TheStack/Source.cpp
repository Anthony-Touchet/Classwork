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

int push(int *darray)//Pushing numbers on the array
{
	int z = size(darray);
	int ch;

	cout << "Enter a number.\n";
	cin >> ch;

	darray[z] = ch;

	return *darray;
}

int pop(int *darray)//Taking numbers off the array
{
	int z = size(darray);
	darray[z] = 0;

	return *darray;
}

void peek(int *darray)//seeing what the top num is.
{
	for (int i = 0; i < size(darray); i++)
	{
		if (darray[i] == 0)
		{
			cout << darray[i - 1] << endl;
		}
	}
}

void empty(int *darray)//is the array empty?
{
	if (darray[0] == 0)
	{
		cout << "The array is empty." << endl;
	}
}

int full(int *darray)//if the array is full, add more memory.
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

int main()
{
	int * darray[5];

	for (int i = 0; i < 100; i++)
	{
		int c; //choice
		cout << "Enter one of the following:\n1 push\n2 pop\n3 peek\n4 exit program\n";
		cin >> c;

		switch (c)
		{
		case 1:
			push(*darray);
			break;
			
		case 2:
			pop(*darray);
			break;

		case 3:
			peek(*darray);
			break;

		case 4:
			break;

		default:
			cout << "Try again.\n";
			break;
		}
		
		if (c == 4)
		{
			break;
		}

		empty(*darray);
		cout << size(*darray) << endl;
		full(*darray);

		system("pause");
	}

	delete darray;
	system("pause");
	return 0;
}