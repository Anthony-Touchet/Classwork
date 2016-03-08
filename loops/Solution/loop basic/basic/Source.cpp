#include <iostream>

int main()
{
	for (int i = 99; i > -1; i--)// Loop
	{
		if (i % 2 == 0)
		{
			std::cout << i << std::endl;
		}

		if (i != 0)//Stopper
		{
			continue;
		}

		else
		{
			break;
		}

	}
	std::cin.get();
	return 0;
}