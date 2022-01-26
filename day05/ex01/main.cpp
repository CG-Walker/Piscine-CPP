#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	Bureaucrat john("John", 26);
	Form contract("Contract", 20, 20);

	john.signForm(contract);
	// Faire plus de tests...
	return 0;
}
