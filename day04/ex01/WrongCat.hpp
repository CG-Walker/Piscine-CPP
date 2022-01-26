#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
public:
	WrongCat(/* args */);
	~WrongCat();

	void makeSound() const;
};

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Mreown." << std::endl;
}

#endif