#include "Contact.hpp"

Contact Contact::newContact(void)
{
	Contact NewContact;

	std::cout << "First name : ";
	std::getline(std::cin, _first_name);

	std::cout << "Last name : ";
	std::getline(std::cin, _last_name);

	std::cout << "Nickname : ";
	std::getline(std::cin, _nickname);

	std::cout << "Phone Number : ";
	std::getline(std::cin, _phone_number);

	std::cout << "Darkest Secret : ";
	std::getline(std::cin, _darkest_secret);

	return NewContact;
}

std::string Contact::_truncInfo(std::string value)
{
	if (value.length() > 10)
		return value.substr(0, 9) + ".";
	return value;
}

void Contact::getInfos(void)
{
	std::cout	<<	std::setw(10) << _truncInfo(_first_name) << "|"
				<<	std::setw(10) << _truncInfo(_last_name) << "|"
				<<	std::setw(10) << _truncInfo(_nickname) << std::endl;
}

void Contact::getCompleteInfos(void) const
{
	std::cout	<< "First Name : " << _first_name << std::endl
				<< "Last Name : " << _last_name << std::endl
				<< "Nickname : " << _nickname << std::endl
				<< "Phone Number : " << _phone_number << std::endl
				<< "Darkest Secret : " << _darkest_secret << std::endl;
}
