#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iomanip>
# include <fstream>
# include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
private:
	std::string	_target;
public:
	// Constructors & Destructor
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & ref);
	~ShrubberyCreationForm();

	// Operator Overload
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & ref);

	// Getters & Setters
	std::string	getTarget(void) const;

	// Class Functions
	void execute(Bureaucrat const & executor) const;
};

#endif