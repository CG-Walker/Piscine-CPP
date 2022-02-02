#include "Animal.hpp"

// Constructors & Destructor
Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal & src)
{
	_type = src.getType();
	std::cout << "Animal Copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

// Operator Overload
Animal & Animal::operator=(Animal & rhs)
{
	_type = rhs.getType();
	return *this;
}

// Getters & Setters
std::string Animal::getType(void) const
{
	return _type;
}

// Class Functions
void Animal::makeSound() const
{
	std::cout << "This animal makes no particular sounds..." << std::endl;
}