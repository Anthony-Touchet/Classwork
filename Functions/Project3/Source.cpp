#include <iostream>

void sort()
{
	float a;
	float b;
	float c;

	std::cin >> a;

	std::cin >> b;

	std::cin >> c;

	if (a < b && c)
	{
		std::cout << a;
	}

	else if (b < c && a )
	{
		std::cout << b;
	}

	else
	{
		std::cout << c;
	}
}

int main()
{
	std::cout << "Enter three numbers of any range." << std::endl;


	sort();


	std::cin.get();
	return 0;
}