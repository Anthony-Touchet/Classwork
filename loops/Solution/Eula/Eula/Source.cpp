#include <iostream>

int main()
{
	int s = 0;

	for (int i = 0; i < 1000; i++)// Loop
	{

		if (i % 3 == 0)
		{
			s = s + i;
			std::cout << i << std::endl;
		}

		else if (i % 5 == 0)
		{
			s = s + i;
			std::cout << i << std::endl;
		}

		else
		{
			std::cout << i << std::endl;
		}	
	}
	std::cout<< s << std::endl;
	std::cin.get();
	return 0;
}