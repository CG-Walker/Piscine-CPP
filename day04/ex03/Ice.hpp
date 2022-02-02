#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	// Constructors & Destructor
	Ice();
	Ice(Ice const & src);
	~Ice();

	// Operator Overload
	Ice & operator=(Ice const & rhs);

	// Getters & Setters

	// Class Functions
	void use(ICharacter & target);
	Ice * clone() const;
};

 #endif