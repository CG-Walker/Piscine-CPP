#include "phonebook.hpp"

int main()
{
	std::string command;
	PhoneBook phoneBook;

	while (true)
	{
		std::cout << "Enter command : ";
		if (!std::getline(std::cin, command))
			return 1;
		if (command == "EXIT")
			return 0;
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.search();
	}
	return 0;
}
