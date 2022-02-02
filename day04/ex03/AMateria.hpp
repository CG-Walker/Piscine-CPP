#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
	// Constructors & Destructor
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria & src);
	virtual ~AMateria();

	// Operator Overload
	// AMateria & operator=(AMateria & rhs); No need

	// Getters & Setters
	std::string const & getType() const; //Returns the materia type

	// Class Functions
	virtual AMateria * clone() const = 0;
	virtual void use(ICharacter & target);
protected:
	std::string _type;
};

 #endif