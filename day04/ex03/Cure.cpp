#include "Cure.hpp"

// Constructors & Destructor
Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called.\n";
}

Cure::Cure(Cure const & src) : AMateria(src.getType())
{
	std::cout << "Cure copy constructor called.\n";
}

Cure::~Cure()
{
	std::cout << "Cure destructor called.\n";
}

// Operator Overload
Cure & Cure::operator=(Cure const & rhs)
{
	(void)rhs;
	// _type = rhs.getType(); Doesn't make sense
	return *this;
}

// Class Functions
void Cure::use(ICharacter & target)
{
	std::string targetName = target.getName();

	std::cout << "* heals " << targetName << "\'s wounds *" << std::endl;
}

Cure *Cure::clone() const
{
	Cure * ret = new Cure;
	return ret;
}