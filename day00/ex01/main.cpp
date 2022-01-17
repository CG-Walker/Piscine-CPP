#include <iostream>
#include <string>

#include "phonebook.hpp"

int main()
{
	std::string command;
	PhoneBook phoneBook;

	while (true)
	{
		std::cout << "Enter command : ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			return 0;
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.search();
	}
	return 0;
}
