#include "MateriaSource.hpp"

// Constructors & Destructor
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
	std::cout << "MateriaSource default constructor called.\n";
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			_inventory[i] = (src._inventory[i])->clone();
	}
	std::cout << "MateriaSource copy constructor called.\n";
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << "MateriaSource destructor called.\n";
}

// Operator Overload
MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (rhs._inventory[i])
			_inventory[i] = (rhs._inventory[i])->clone();
	}
	return *this;
}

// Class Functions
void MateriaSource::learnMateria(AMateria * m)
{
	int i = 0;

	while (_inventory[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 materia.\n";
		return ;
	}
	_inventory[i] = m;
	std::cout << m->getType() << " materia learned.\n";
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4 && _inventory[i] && (_inventory[i])->getType() != type)
		i++;
	if (i >= 4 || !_inventory[i])
	{
		std::cout << type << " materia doesn't exist.\n";
		return 0;
	}
	std::cout << type << " materia created.\n";
	return (_inventory[i])->clone();
}