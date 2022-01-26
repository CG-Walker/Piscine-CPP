#include "PresidentialPardonForm.hpp"

// Constructors & Destructor
PresidentialPardonForm::PresidentialPardonForm() : Form("Default Robotomy", 72, 45)
{
	_target = "Default";
	std::cout << "Constructor (Default) : PresidentialPardonForm called. (" << getName() << ")\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Classic Robotomy", 72, 45)
{
	_target = target;
	std::cout << "Constructor (Classic) : PresidentialPardonForm called. (" << getName() << ")\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & ref)
{
	_target = ref.getTarget();
	std::cout << "Constructor (Copy) : PresidentialPardonForm called. (" << getName() << ")\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor : PresidentialPardonForm called. (" << getName() << ")\n";
}

// Operator Overload
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & ref)
{
	_target = ref.getTarget();
	return *this;
}

// Getters & Setters
std::string	PresidentialPardonForm::getTarget(void) const
{
	return _target;
}

// Class Functions
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << _target << "has been pardonned by Zafod Beeblebrox\n";
}

const char* PresidentialPardonForm::FailureException::what() const throw()
{
	return ("PresidentialPardonFormException : Failed to execute.");
};
