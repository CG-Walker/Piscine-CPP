#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called.\n";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria classic constructor called.\n";
}

AMateria::AMateria(AMateria & src) : _type(src.getType())
{
	std::cout << "AMateria copy constructor called.\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called.\n";
}

// Getters & Setters
std::string const & AMateria::getType() const
{
	return _type;
}

// Class Functions
void AMateria::use(ICharacter & target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
