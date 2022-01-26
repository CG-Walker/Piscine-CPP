#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_requiredGradeToSign;
	const int			_requiredGradeToExecute;
	bool				_signed;
public:
	// Constructors & Destructor
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form & src);
	~Form();

	// Operator Overload
	Form & operator=(Form const & src);

	// Getters & Setters
	const std::string	getName(void) const;
	int					getRequiredGradeToSign(void) const;
	int					getRequiredGradeToExecute(void) const;
	bool				getSigned(void) const;
	void				setSigned(bool value);

	// Class functions
	void			beSigned(Bureaucrat & ref);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	// Exceptions
	class FException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLow : public FException
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooHigh : public FException
	{
		public:
			virtual const char* what() const throw();
	};

	class FormNotSigned : public FException
	{
		public:
			virtual const char* what() const throw();
	};
};

// Operator Overload
std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif