#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
	bool bIsRunning = true;
	std::string input = "";
	int count = 0;

	std::cout << "*****Random number generator*****\n";

	while (bIsRunning)
	{
		std::cout << "Enter how many numbers you would like to generate (0 to exit): ";
		getline(std::cin, input);
		count = std::stoi(input);
		
		// Check if user wants to quit application.

		if (count == 0)
		{
			break;
		}

		// Generate and output random numbers.
		
		srand(unsigned(time(0)));

		for (int i = 0; i < count; ++i)
		{
			std::cout << rand() % 100;
			if (i == count - 1)
			{
				continue;
			}
			std::cout << ", ";
		}
		std::cout << "\n\n";
	}

}
