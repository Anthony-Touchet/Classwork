#include <iostream>

int main()
{
	int a;
	int b;

	std::cout << "Enter two numbers." << std::endl;//Instruction

	std::cin >> (a);

	std::cin >> (b);
	std::cin.get();


	if (a < b)
	{
		std::cout << a << std::endl;
	}

	else if (a < b)
	{
		std::cout << b << std::endl;
	}

	else
	{
		std::cout << "Draw!!!!" << std::endl;
	}

	std::cin.get();
	return 0;
}