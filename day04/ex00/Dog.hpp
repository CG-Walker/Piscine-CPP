#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
public:
	// Constructors & Destructor
	Dog();
	Dog(Dog & src);
	~Dog();

	// Operator Overload
	Dog & operator=(Dog & rhs);

	// Getters & Setters

	// Class Functions
	void makeSound() const;
private:
};

 #endif