#include "WrongCat.hpp"

// Constructors & Destructor
WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat & src)
{
	_type = src.getType();
	std::cout << "WrongCat Copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

// Operator Overload
WrongCat & WrongCat::operator=(WrongCat & rhs)
{
	_type = rhs.getType();
	return *this;
}

// Class Functions
void WrongCat::makeSound() const
{
	std::cout << "Mreown." << std::endl;
}