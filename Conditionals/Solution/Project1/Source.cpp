#include <iostream>

int main()
{
	int y;
	int x = 0;

	std::cout << "Enter any number." << std::endl;

	std::cin >> y;

	if (y == 0)
	{
		x = 100;
	}

	else
	{
		x = 0;
	}

	std::cout << (x) << std::endl;


	return 0;
}