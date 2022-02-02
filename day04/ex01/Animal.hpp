#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:
	// Constructors & Destructor
	Animal();
	Animal(Animal & src);
	virtual ~Animal();

	// Operator Overload
	Animal & operator=(Animal & rhs);

	// Getters & Setters
	std::string	getType(void) const;

	// Class Functions
	virtual void makeSound() const;
protected:
	std::string _type;
};

#endif