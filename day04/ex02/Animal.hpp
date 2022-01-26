#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string _type;
public:
	Animal(/* args */);
	virtual ~Animal() = 0;

	virtual void makeSound() const = 0;
	std::string	getType(void) const;
};

Animal::Animal(/* args */)
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "This animal makes no particular sounds..." << std::endl;
}

std::string Animal::getType(void) const
{
	return _type;
}

#endif