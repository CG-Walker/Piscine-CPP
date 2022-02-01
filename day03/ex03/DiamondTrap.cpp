#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	setHitPoints();
	setEnergyPoints();
	setAttackDamage();
}

DiamondTrap::DiamondTrap(DiamondTrap & src) : ClapTrap(src.getName()), ScavTrap(src.getName()), FragTrap(src.getName())
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	ClapTrap::_name = src.getName() + "_clap_name";
	_name = src.getName();
	_hitPoints = src.getHitPoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap & rhs)
{
	_name = rhs.getName();
	_hitPoints = rhs.getHitPoints();
	_energyPoints = rhs.getEnergyPoints();
	_attackDamage = rhs.getAttackDamage();

	return *this;
}

void DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmiI(void)
{
	std::cout << "DiamondTrap name is " << _name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::getName() << std::endl;
}

