#include "Bureaucrat.hpp"

// Constructors & Destructor
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Default Bureaucrat Constructor called" << "\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	setGrade(grade);
	std::cout << "Classic Bureaucrat Constructor called" << "\n";
}

Bureaucrat::Bureaucrat(Bureaucrat & src) : _name(src.getName() + "_copy")
{
	std::cout << "Copy Bureaucrat Constructor called" << "\n";
	_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << "\n";
}

// Getters & Setters
std::string Bureaucrat::getName(void) const
{
	return _name;
}

int	Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHigh());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLow());
	else
		_grade = grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHigh());
	else
		_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLow());
	else
		_grade++;
}

// Operator Overload
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	_grade = src.getGrade();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << " has a grade " << rhs.getGrade();
	return (o);
}

// Exceptions
const char* Bureaucrat::BException::what() const throw()
{
	return ("BureaucratException");
}

const char* Bureaucrat::GradeTooLow::what() const throw()
{
	return ("Grade must be over or equal to 1.");
}

const char* Bureaucrat::GradeTooHigh::what() const throw()
{
	return ("Grade must be under or equal to 150.");
};
