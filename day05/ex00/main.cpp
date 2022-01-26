#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat john("John", -19);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// Faire plus de tests...
	return 0;
}
