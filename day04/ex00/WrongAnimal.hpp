#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
public:
	// Constructors & Destructor
	WrongAnimal();
	WrongAnimal(WrongAnimal & src);
	~WrongAnimal();

	// Operator Overload
	WrongAnimal & operator=(WrongAnimal & rhs);

	// Getters & Setters
	std::string	getType(void) const;

	// Class Functions
	void makeSound() const;
protected:
	std::string _type;
};

 #endif