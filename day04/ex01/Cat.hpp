#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

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
	Brain * getBrain();

	// Class Functions
	void makeSound() const;
private:
	Brain * _brain;
};

 #endif