#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::complain(std::string level)
{
	std::string type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*ptr[4])(void) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	int			i = -1;

	while (i < 4)
	{
		if (type[i] == level)
			break ;
		i++;
	}

	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	while (i < 4)
	{
		switch (i)
		{
			case (0):
				(this->*(ptr[i]))();
				break;
			case (1):
				(this->*(ptr[i]))();
				break;
			case (2):
				(this->*(ptr[i]))();
				break;
			case (3):
				(this->*(ptr[i]))();
				break;
		}
		if (i < 3)
			std::cout << std::endl;
		i++;
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