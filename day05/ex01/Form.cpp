#include "Form.hpp"

// Constructors & Destructor
Form::Form() : _name("Default"), _requiredGradeToSign(150), _requiredGradeToExecute(150), _signed(false)
{
	std::cout << "Default Form Constructor called\n";
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _requiredGradeToSign(gradeToSign), _requiredGradeToExecute(gradeToExecute), _signed(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw (Form::GradeTooHigh());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw (Form::GradeTooLow());
	else
		std::cout << "Classic Form Constructor called\n";
}

Form::Form(Form & src) : _name(src.getName()), _requiredGradeToSign(src.getRequiredGradeToSign()), _requiredGradeToExecute(src.getRequiredGradeToExecute()), _signed(src.getSigned())
{
	std::cout << "Copy Form Constructor called\n";
}

Form::~Form()
{
	std::cout << "Form Destructor called\n";
}

// Getters & Setters
const std::string Form::getName(void) const
{
	return _name;
}

int	Form::getRequiredGradeToSign(void) const
{
	return _requiredGradeToSign;
}

int	Form::getRequiredGradeToExecute(void) const
{
	return _requiredGradeToExecute;
}

bool	Form::getSigned(void) const
{
	return _signed;
}

void	Form::setSigned(bool value)
{
	_signed = value;
}


// Operator Overload
Form & Form::operator=(Form const & src)
{
	_signed = src.getSigned();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o	<< "Form " << rhs.getName() << " has a " << rhs.getRequiredGradeToSign()
		<< " required grade to sign and a " << rhs.getRequiredGradeToExecute()
		<< " required grade to execute. Its signed value is equal to " << rhs.getSigned()
		<< std::endl;
	return o;	
}

// Class functions
void	Form::beSigned(Bureaucrat & ref)
{
	if (ref.getGrade() > _requiredGradeToSign)
		throw (Form::GradeTooLow());
	else
	{
		_signed = true;
		std::cout	<< "Form " << _name << " was signed by "
					<< ref.getName() << " with a grade of "
					<< ref.getGrade() << " (Required : "
					<< _requiredGradeToSign << ")\n";
	}
}

// Exceptions
const char* Form::FException::what() const throw()
{
	return ("FormException");
}

const char* Form::GradeTooLow::what() const throw()
{
	return ("FormException : Grade must be over or equal to 1.");
}

const char* Form::GradeTooHigh::what() const throw()
{
	return ("FormException : Grade must be under or equal to 150.");
};