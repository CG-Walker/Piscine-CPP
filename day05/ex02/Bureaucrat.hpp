#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	// Constructors & Destructor
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat & src);
	~Bureaucrat();

	// Getters & Setters
	std::string getName(void) const;
	int			getGrade(void) const;
	void		setGrade(int grade);

	// Class Functions
	void		incrementGrade(void);
	void		decrementGrade(void);
	void		signForm(Form & ref);
	void		executeForm(Form const & form);

	// Operator Overload
	Bureaucrat & operator=(Bureaucrat const & src);

	// Exceptions
	class BException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLow : public BException
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooHigh : public BException
	{
		public:
			virtual const char* what() const throw();
	};
};

// Operator Overload
std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif