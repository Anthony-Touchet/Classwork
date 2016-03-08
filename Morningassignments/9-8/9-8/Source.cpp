#include <iostream>
#include <string>
using namespace std;

float addSum(float a, float b)//Our function to add the sums. Varriable names kept same to keep clarity.
{
	int result;//Our final result.
	result = a + b;
	return result;//Returns the value of result back to main.
}

int main()
{
	float a;//a and b are our variables that will be added.
	float b;
	float result;//This will be the reslut of the function.

	cout << "Enter two numbers of any kind.\n";// User input for variables a and b.

	cin >> a;
	cin >> b;

	result = addSum(a, b);//The result of the function will equal the variable result so it can be printed.

	cout << result << endl;//Printing out the variable for reference.

	system("pause");
	return 0;
}