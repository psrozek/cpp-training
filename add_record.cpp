#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

struct Person
{
	int age = 0;
	std::string name = "";
};

std::vector<Person> records;

void AddRecord(std::string newName, int newAge)
{
	Person newRecord;
	newRecord.name = newName;
	newRecord.age = newAge;
	records.push_back(newRecord);
	std::cout << "\nUser record added successfully.\n\n";
};

int main()
{
	std::cout << "User SignUp Application\n" << std::endl;
	bool bIsRunning = true;
	while (bIsRunning)
	{
		std::cout << "Please select an option:\n";
		std::cout << "1. Add record\n";
		std::cout << "2. Quit\n";
		std::cout << "Enter option: ";
		std::string inputString;
		std::getline(std::cin, inputString);

		switch (std::stoi(inputString))
		{
		case 1:
		{
			std::string name = "";
			int age = 0;
			std::cout << "\nAdd user. Please enter user name and age:\n";
			std::cout << "Name: ";
			std::getline(std::cin, name);
			std::cout << "Age: ";
			std::getline(std::cin, inputString);
			age = std::stoi(inputString);
			AddRecord(name, age);
		}
		break;

		case 2:
			bIsRunning = false;
			break;

		default:
			std::cout << "\n\nError: Invalid option selection.\n\n";
			break;
		}
	}
}
