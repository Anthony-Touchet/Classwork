# include <iostream>

int main()
{
	
	int scrub = 30;
	int cid = 30;
	if (cid == scrub)
	{
		std::cout << "Mexican standoff." << std::endl;
		std::cin.get();
	}
		
	else
	{
		if(cid > scrub)
		{
			std::cout << "MLG!"<< std::endl;
			std::cin.get();
		}
		
		else
		{
			if (scrub > 49)
			{
				std::cout << "God is that you playing?" << std::endl;
				std::cin.get();
			}

			else
			{
				std::cout << "Hacker." << std::endl;
				std::cin.get();
			}
		}
	}
	return 0;
}