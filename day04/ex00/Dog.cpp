#include "Dog.hpp"

// Constructors & Destructor
Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Dog & src)
{
	_type = src.getType();
	std::cout << "Dog Copy constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

// Operator Overload
Dog & Dog::operator=(Dog & rhs)
{
	_type = rhs.getType();
	return *this;
}

// Class Functions
void Dog::makeSound() const
{
	std::cout << "Woof." << std::endl;
}