#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	

	std::cout << "Enter five numbers." << std::endl;

	std::cin >> (a);
	std::cin.get();

	std::cin >> (b);
	std::cin.get();

	std::cin >> (c);
	std::cin.get();

	std::cin >> (d);
	std::cin.get();

	std::cin >> (e);
	std::cin.get();

	int f = (a + b + c + d + e) / 5;

	std::cout << (f);
	std::cin.get();




	return 0;
}