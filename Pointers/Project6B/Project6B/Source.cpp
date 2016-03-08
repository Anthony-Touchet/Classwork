#include <iostream>
#include <string>
using namespace std;

int CountEven(int *array, int array_len)//Part B
{
	int evennum = 0;
	int* result = &evennum;
	for (int i = 0; i < array_len; i++)
	{
		int z = *(array + i);
		if (z % 2 == 0)
		{
			evennum++;
		}
	}

	return *result;
}

int main()
{
	int array[8]={8, 2, 4, 4, 2, 6, 2, 9};//Inital array 
	
	int product = CountEven(array, 8);//function

	cout << product << endl;//printing the product of the funcion

	system("pause");
	return 0;
}