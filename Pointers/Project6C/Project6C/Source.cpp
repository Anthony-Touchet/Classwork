//Write a function Maximum(double* array, int array_size) that returns a pointer to the maximum value of an array of doubles.If the array is empty, return nullptr

#include <iostream>
#include <string>
using namespace std;

double* Maximum(double* array, int array_size)
{
	//need a current value and a max value for sure. Max needs to be returned so this is the pointer.
	//can keep checking the array with a loop.
	//Keeps returning the last value inside the array. why?

	double* maxval = 0;//varriable used to return.
	for (int i = 0; i < array_size; i++)
	{
		double curnum = *(array + i);//Current Valye in the array. based on i.

		if (&curnum < maxval)// If current value is less than max, go back to loop.
		{
			continue;
		}

		if (&curnum >= maxval)//if Max value is less than or equal to currval, maxval = curval.
		{
			maxval = &curnum;
		}

	}

	return maxval;
}

int main()
{
	double array[5] = {10.555, 1.111, 15.265, 13.546, 1.02};
	
	double* result = Maximum(array, 5);

	cout << *result << endl;

	system("pause");
	return 0;
}