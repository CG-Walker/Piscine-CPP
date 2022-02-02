#include "Cat.hpp"

// Constructors & Destructor
Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat & src)
{
	_type = src.getType();
	std::cout << "Cat Copy constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

// Operator Overload
Cat & Cat::operator=(Cat & rhs)
{
	_type = rhs.getType();
	return *this;
}

// Class Functions
void Cat::makeSound() const
{
	std::cout << "Meow." << std::endl;
}