#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# include <iostream>
# include <string>

class Dog : public Animal
{
private:
	Brain *_brain;
public:
	Dog(/* args */);
	~Dog();

	void makeSound() const;
};

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof." << std::endl;
}

#endif