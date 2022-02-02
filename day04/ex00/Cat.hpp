#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
public:
	// Constructors & Destructor
	Cat();
	Cat(Cat & src);
	~Cat();

	// Operator Overload
	Cat & operator=(Cat & rhs);

	// Getters & Setters

	// Class Functions
	void makeSound() const;
private:
};

 #endif