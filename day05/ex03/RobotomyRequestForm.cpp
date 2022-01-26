#include "RobotomyRequestForm.hpp"

// Constructors & Destructor
RobotomyRequestForm::RobotomyRequestForm() : Form("Default Robotomy", 72, 45)
{
	_target = "Default";
	std::cout << "Constructor (Default) : RobotomyRequestForm called. (" << getName() << ")\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Classic Robotomy", 72, 45)
{
	_target = target;
	std::cout << "Constructor (Classic) : RobotomyRequestForm called. (" << getName() << ")\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & ref)
{
	_target = ref.getTarget();
	std::cout << "Constructor (Copy) : RobotomyRequestForm called. (" << getName() << ")\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor : RobotomyRequestForm called. (" << getName() << ")\n";
}

// Operator Overload
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & ref)
{
	_target = ref.getTarget();
	return *this;
}

// Getters & Setters
std::string	RobotomyRequestForm::getTarget(void) const
{
	return _target;
}

// Class Functions
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	int rand = std::rand() % 2;
	if (getSigned() == false)
		throw (Form::FormNotSigned());
	else if (executor.getGrade() > getRequiredGradeToExecute())
		throw (Form::GradeTooLow());
	std::cout << "*intensive drilling noises*\n";
	if (rand == 1)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		throw (RobotomyRequestForm::FailureException());
}

const char* RobotomyRequestForm::FailureException::what() const throw()
{
	return ("RobotomyRequestFormException : Failed to execute.");
};