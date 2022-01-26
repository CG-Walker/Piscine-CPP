#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include <cstdlib> // rand, srand
# include <ctime> // time
# include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
public:
	// Constructors & Destructor
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & ref);
	~RobotomyRequestForm();

	// Operator Overload
	RobotomyRequestForm & operator=(RobotomyRequestForm const & ref);

	// Getters & Setters
	std::string	getTarget(void) const;

	// Class Functions
	void execute(Bureaucrat const & executor) const;

	// Exceptions
	class FailureException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#endif