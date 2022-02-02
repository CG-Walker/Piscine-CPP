#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
public:
	// Constructors & Destructor
	WrongCat();
	WrongCat(WrongCat & src);
	~WrongCat();

	// Operator Overload
	WrongCat & operator=(WrongCat & rhs);

	// Getters & Setters

	// Class Functions
	void makeSound() const;
private:
};

 #endif