#include "Cat.hpp"

// Constructors & Destructor
Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat & src)
{
	_type = src.getType();
	_brain = new Brain(*src.getBrain());
	std::cout << "Cat Copy constructor called." << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called." << std::endl;
}

// Operator Overload
Cat & Cat::operator=(Cat & rhs)
{
	_type = rhs.getType();
	if (_brain)
		delete _brain;
	_brain = new Brain(*rhs.getBrain());
	return *this;
}

// Getters & Setters
Brain * Cat::getBrain()
{
	return _brain;
}

// Class Functions
void Cat::makeSound() const
{
	std::cout << "Meow." << std::endl;
}