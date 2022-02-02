#include "Character.hpp"

// Constructors & Destructor
Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
	std::cout << "Character classic constructor called.\n";
}

Character::Character(Character & src) : _name(src.getName() + "_copy")
{
	for(int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			_inventory[i] = (src._inventory[i])->clone();
	}
	std::cout << "Character copy constructor called.\n";
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << "Character destructor called.\n";
}


// Operator Overload
Character & Character::operator=(Character & rhs)
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

// Getters & Setters
std::string const & Character::getName() const
{
	return _name;
}


AMateria *	Character::getMateriaFromInventory(int index)
{
	if (index >= 0 && index < 4)
		return _inventory[index];
	return NULL;
}

// Class Functions
void	Character::equip(AMateria * m)
{
	int i = 0;

	if (!m)
	{
		std::cout << _name << " tried to equip nothing.\n";
		return ;
	}
	while (_inventory[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << _name << " can't equip more than 4 Materia.\n";
		return ;
	}
	_inventory[i] = m;
	std::cout << _name << " equipped materia " << m->getType() << " in slot " << i << "\n";
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << _name << " tried to unequip nothing at slot " << idx << "\n";
	else if (!_inventory[idx])
		std::cout << _name << " has nothing equipped at slot " << idx << "\n";
	else
	{
		AMateria * tmp = _inventory[idx];
		std::cout << _name << " unequipped " << tmp->getType() << " at slot "<< idx << "\n";
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	(_inventory[idx])->use(target);
}
