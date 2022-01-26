#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
public:
	// Constructors & Destructor
	Intern();
	Intern(Intern const & ref);
	~Intern();

	// Operator Overload
	Intern & operator=(Intern const & ref);

	// Class functions
	Form *makeForm(std::string form_name, std::string form_target);

	// Exceptions
	class Exception : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#endif