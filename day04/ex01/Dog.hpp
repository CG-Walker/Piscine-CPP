#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

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
	Brain * getBrain();

	// Class Functions
	void makeSound() const;
private:
	Brain * _brain;
};

 #endif