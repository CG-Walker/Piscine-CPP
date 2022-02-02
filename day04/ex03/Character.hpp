#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
public:
	// Constructors & Destructor
	Character(std::string name);
	Character(Character & src);
	~Character();

	// Operator Overload
	Character & operator=(Character & rhs);

	// Getters & Setters
	std::string const & getName() const;
	AMateria *	getMateriaFromInventory(int index);

	// Class Functions
	void		equip(AMateria * m);
	void		unequip(int idx);
	void		use(int idx, ICharacter & target);
private:
	AMateria *			_inventory[4];
	std::string const	_name;
};

 #endif