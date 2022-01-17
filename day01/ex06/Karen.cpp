#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::complain(std::string level)
{
	std::string type[4] = {"debug", "info", "warning", "error"};
	void		(Karen::*ptr[4])(void) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	int			j = -1;
	for (int i = 0 ; i < 4 ; i++)
	{
		if (type[i] == level)
			j = i;
	}
	switch (j)
	{
		case (0):
			(this->*(ptr[j]))();
			break;
		case (1):
			(this->*(ptr[j]))();
			break;
		case (2):
			(this->*(ptr[j]))();
			break;
		case (3):
			(this->*(ptr[j]))();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Karen::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}