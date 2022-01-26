#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <cstdlib> // rand, srand
# include <ctime> // time
# include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	// Constructors & Destructor
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & ref);
	~PresidentialPardonForm();

	// Operator Overload
	PresidentialPardonForm & operator=(PresidentialPardonForm const & ref);

	// Getters & Setters
	std::string	getTarget(void) const;

	// Class Functions
	void execute(Bureaucrat const & executor) const;
};

#endif