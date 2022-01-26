#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

void test1(void)
{
	Bureaucrat john("John", 26);
	ShrubberyCreationForm contract("Contract");
	std::cout << std::endl;
	try
	{
		std::cout << "With a grade of 26 :\n";
		john.signForm(contract);
		contract.execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	john.setGrade(150);
	try
	{
		std::cout << "With a grade of 150 :\n";
		john.signForm(contract);
		contract.execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}

void test2(void)
{
	Bureaucrat john("John", 26);
	RobotomyRequestForm contract("Contract");
	std::cout << std::endl;
	try
	{
		std::cout << "With a grade of 26 :\n";
		john.signForm(contract);
		contract.execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	john.setGrade(150);
	try
	{
		std::cout << "With a grade of 150 :\n";
		john.signForm(contract);
		contract.execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}

int main(void)
{
	test1();
	std::cout << std::endl;
	test2();
	// Faire plus de tests...
	return 0;
}
