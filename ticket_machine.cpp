#include <iostream>
#include <string>

bool bIsRunning = true;
int main()
{
	while (bIsRunning)
	{
		std::string input;
		int number;

		std::cout << "Ticket machine:\n";
		std::cout << "1. 30-minutes ticket\n";
		std::cout << "2. 1-hour ticket\n";
		std::cout << "3. 1-day ticket\n";
		std::cout << "Please enter a number 1-3 to view a ticket price: ";
		getline(std::cin, input);
		number = std::stoi(input);

		switch (number)
		{
		case 1:
			std::cout << "30-minutes ticket: $0.99\n";
			break;

		case 2:
			std::cout << "1-hour ticket: $1.99\n";
			break;

		case 3:
			std::cout << "1-day ticket: $4.99\n";
			break;

		default:
			std::cout << "Invalid choice.\n";
			break;
		}
	}
}
