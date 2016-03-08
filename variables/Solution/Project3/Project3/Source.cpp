#include <iostream>

int main()
{
	int a;
	int b;
	int c;

	std::cout << "Enter two numbers" << std::endl;

	std::cin >> (a);
	std::cin.get();

	std::cin >> (b);
	std::cin.get();

	(c) = (a);
	(a) = (b);
	(b) = (c);

	std::cout << (a);
	std::cin.get();

	std::cout << (b);
	std::cin.get();
	
	return 0;
}