#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _size(0)
{
}

void PhoneBook::addContact(void)
{
	Contact NewContact;
	NewContact.newContact();
	_phone_book[_size] = NewContact;
	_size += 1;
	if (_size > 7)
		_size = 7;
}

void PhoneBook::search(void)
{
	std::string	string_index;
	size_t		chosen_index;

	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		_phone_book[i].getInfos();
	}
	std::cout << "Enter an index number to see it's infos : ";
	std::getline(std::cin, string_index);
	for (size_t i = 0; i < string_index.size(); i++)
	{
		if (!isdigit(string_index[i]))
		{
			std::cout << string_index << " is not a number." << std::endl;
			return ;
		}
	}
	std::istringstream(string_index) >> chosen_index;
	if (chosen_index < 0 || chosen_index > 7)
		std::cout << "Index doesn't exist." << std::endl;
	else
		_phone_book[chosen_index].getCompleteInfos();
}