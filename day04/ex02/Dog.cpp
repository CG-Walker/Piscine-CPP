#include "Dog.hpp"

// Constructors & Destructor
Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Dog & src)
{
	_type = src.getType();
	_brain = new Brain(*src.getBrain());
	std::cout << "Dog Copy constructor called." << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called." << std::endl;
}

// Operator Overload
Dog & Dog::operator=(Dog & rhs)
{
	_type = rhs.getType();
	if (_brain)
		delete _brain;
	_brain = new Brain(*rhs.getBrain());
	return *this;
}

// Getters & Setters
Brain * Dog::getBrain()
{
	return _brain;
}

// Class Functions
void Dog::makeSound() const
{
	std::cout << "Woof." << std::endl;
}