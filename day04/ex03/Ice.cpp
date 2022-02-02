#include "Ice.hpp"

// Constructors & Destructor
Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called.\n";
}

Ice::Ice(Ice const & ref) : AMateria(ref.getType())
{
	std::cout << "Ice copy constructor called.\n";
}

Ice::~Ice()
{
	std::cout << "Ice destructor called.\n";
}

// Operator Overload
Ice & Ice::operator=(Ice const & rhs)
{
	(void)rhs;
	//_type = rhs.getType(); Doesn't make sense
	return *this;
}

// Class Functions
void Ice::use(ICharacter & target)
{
	std::string targetName = target.getName();

	std::cout << "* shoots an ice bolt at " << targetName << " *" << std::endl;
}

Ice *Ice::clone() const
{
	Ice	* ret = new Ice;
	return ret;
}
