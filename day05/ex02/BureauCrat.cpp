#include "Bureaucrat.hpp"

// Constructors & Destructor
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Constructor (Default) : Bureaucrat called. (" << getName() << ")\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	setGrade(grade);
	std::cout << "Constructor (Classic) : Bureaucrat called. (" << getName() << ")\n";
}

Bureaucrat::Bureaucrat(Bureaucrat & src) : _name(src.getName() + "_copy")
{
	_grade = src.getGrade();
	std::cout << "Constructor (Copy) : Bureaucrat called. (" << getName() << ")\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor : Bureaucrat called. (" << getName() << ")\n";
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

// Class Functions
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

void	Bureaucrat::signForm(Form & ref)
{
	try
	{
		ref.beSigned(*this);
		std::cout	<< "Bureaucrat " << _name
					<< " signs " << ref.getName()
					<< std::endl;
	}
	catch(Form::FException & e)
	{
		std::cerr	<< "Bureaucrat " << _name
					<< " cannot signs form " << ref.getName()
					<< " because of the following error : "
					<< e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " succesfully executed " << form << std::endl;
	}
	catch (Form::FException &e)
	{
		std::cout << e.what() << std::endl;
	}
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
