#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	// Constructors & Destructor
	Cure();
	Cure(Cure const & src);
	~Cure();

	// Operator Overload
	Cure & operator=(Cure const & rhs);

	// Getters & Setters

	// Class Functions
	void use(ICharacter & target);
	Cure * clone() const;
};

 #endif