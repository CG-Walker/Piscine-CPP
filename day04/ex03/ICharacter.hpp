#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	// Constructors & Destructor
	virtual ~ICharacter() {}

	// Operator Overload
	//ICharacter & operator=(ICharacter & rhs); No need

	// Getters & Setters
	virtual std::string const & getName() const = 0;

	// Class Functions
	virtual void equip(AMateria * m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter & target) = 0;
};

 #endif