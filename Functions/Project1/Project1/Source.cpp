#include <iostream>
void PrintInteger(int variable)
{
	std::cout << variable << std::endl;
}
int main()
{
	int the_variable = 1;
	PrintInteger(the_variable);
	{
		PrintInteger(the_variable);
		int the_variable = 2;
		PrintInteger(the_variable);
		{
			PrintInteger(the_variable);
			int the_variable = 3;
			PrintInteger(the_variable);
		}
		PrintInteger(the_variable);
	}
	PrintInteger(the_variable);

	system("pause");
	//variable and the_variable are two diffrent integers. The scope of each function changes what the_variable is. Since one scope does not affect the others, the_variable is diffrent for every scope.
}