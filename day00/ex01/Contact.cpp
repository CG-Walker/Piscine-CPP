#include "contact.hpp"

Contact Contact::newContact(void)
{
    Contact NewContact;

	std::cout << "First name : ";
	std::cin >> first_name;

	std::cout << "Last name : ";
	std::cin >> last_name;

	std::cout << "Nickname : ";
	std::cin >> nickname;

	std::cout << "Phone Number : ";
	std::cin >> phone_number;

	std::cout << "Darkest Secret : ";
	std::cin >> darkest_secret;

    return NewContact;
}

std::string Contact::truncInfo(std::string value)
{
	if (value.length() > 10)
		return value.substr(0, 9) + ".";
	return value;
}

void Contact::getInfos(void)
{
	std::cout	<<	std::setw(10) << truncInfo(first_name) << "|"
				<<	std::setw(10) << truncInfo(last_name) << "|"
				<<	std::setw(10) << truncInfo(nickname) << std::endl;
}

void Contact::getCompleteInfos(void)
{
	std::cout	<< "First Name : " << first_name << std::endl
				<< "Last Name : " << last_name << std::endl
				<< "Nickname : " << nickname << std::endl
				<< "Phone Number : " << phone_number << std::endl
				<< "Darkest Secret : " << darkest_secret << std::endl;
}