#include <iostream>

int main()
{	
	char first[15]= "";
	char last[15]= "";
	
	std::cout << "Enter your first and last name. Hit Enter to confim each name." << std::endl;

	std::cin >> first; //Getting the name.
	std::cin.get();

	std::cin >> last;

	std::cout << last;
	std::cout << first << std::endl;

	system("pause");
	return 0;
}