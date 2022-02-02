#include "WrongAnimal.hpp"

// Constructors & Destructor
WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & src)
{
	_type = src.getType();
	std::cout << "WrongAnimal Copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

// Operator Overload
WrongAnimal & WrongAnimal::operator=(WrongAnimal & rhs)
{
	_type = rhs.getType();
	return *this;
}

// Getters & Setters
std::string WrongAnimal::getType(void) const
{
	return _type;
}
	
// Class Functions
void WrongAnimal::makeSound() const
{
	std::cout << "This class makes no sounds. At all. Maybe it's dead ?" << std::endl;
}