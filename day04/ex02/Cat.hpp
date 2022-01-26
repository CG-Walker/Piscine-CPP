#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# include <iostream>
# include <string>

class Cat : public Animal
{
private:
	Brain *_brain;
public:
	Cat(/* args */);
	~Cat();

	void makeSound() const;
};

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow." << std::endl;
}

#endif