#include <string>
#include <iostream>

#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
}

void PhoneBook::addContact(void)
{
	Contact NewContact;
	NewContact.newContact();
	phone_book[size] = NewContact;
	size += 1;
	if (size > 7)
		size = 7;
}

void PhoneBook::search(void)
{
	size_t chosen_index;

	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		phone_book[i].getInfos();
	}
	std::cout << "Enter an index number to see it's infos : ";
	std::cin >> chosen_index;
	if (chosen_index < 0 || chosen_index > 7)
		std::cout << "Index doesn't exist." << std::endl;
	else
	{
		phone_book[chosen_index].getCompleteInfos();
	}
}