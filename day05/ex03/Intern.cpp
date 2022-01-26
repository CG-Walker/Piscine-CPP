#include "Intern.hpp"

// Constructors & Destructor
Intern::Intern()
{
	std::cout << "An Intern has been constructed\n";
}

Intern::Intern(Intern const & ref)
{
	(void)ref;
	std::cout << "An Intern has been constructed from a copy\n";
}

Intern::~Intern()
{
	std::cout << "An Intern has been destroyed\n";
}

// Operator Overload
Intern & Intern::operator=(Intern const & ref)
{
	(void)ref;
	return (*this);
}

// Class functions
static Form	*new_robo(std::string target)
{
	Form	*robo = new RobotomyRequestForm(target);
	return (robo);
}

static Form	*new_president(std::string target)
{
	Form	*president = new PresidentialPardonForm(target);
	return (president);
}

static Form	*new_shrub(std::string target)
{
	Form	*shrub = new ShrubberyCreationForm(target);
	return (shrub);
}

// Subject required method:
Form *Intern::makeForm(std::string form_name, std::string form_target)
{
	Form	*(*fct[3])(std::string target) = { new_robo, new_president, new_shrub};
	std::string	msg[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form	*ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == msg[i])
			ret = fct[i](form_target);
	}
	if (ret)
		std::cout << "Intern creates " << *ret << std::endl;
	else
		throw (Intern::Exception());
	return (ret);
}

// Exceptions
const char* Intern::Exception::what() const throw()
{
	return ("Unknown Form exception");
}