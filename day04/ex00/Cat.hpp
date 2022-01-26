#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"

# include <iostream>
# include <string>

class Cat : public Animal
{
private:
	/* data */
public:
	Cat(/* args */);
	~Cat();

	void makeSound() const;
};

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow." << std::endl;
}

#endif