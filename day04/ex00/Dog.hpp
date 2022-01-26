#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# include <iostream>
# include <string>

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	~Dog();

	void makeSound() const;
};

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof." << std::endl;
}

#endif