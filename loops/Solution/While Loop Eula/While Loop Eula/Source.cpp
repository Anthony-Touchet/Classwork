#include <iostream>

int main()
{
	int i = 0;
	int s = 0;

	while (i < 999)// Loop
	{	
		i = i + 1;

		if (i % 3 == 0, i % 5 == 0)
		{
			s = s + i;
			std::cout << i << std::endl;
		}

		else if (i % 3 == 0)
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

	std::cout << s << std::endl;
	std::cin.get();
	return 0;
}