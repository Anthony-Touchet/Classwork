#include <iostream>

int main()
{
	for (int i = 0; i < 101; i ++)// Loop
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}

		else if (i % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}

		else if (i % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}

		else
		{
			std::cout << i << std::endl;
		}

		if (i != 100)//stopper
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