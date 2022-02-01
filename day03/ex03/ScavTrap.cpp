#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap & src) : ClapTrap(src.getName())
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	_hitPoints = src.getHitPoints();
	_energyPoints = src.getEnergyPoints();
	_attackDamage = src.getAttackDamage();
}

ScavTrap & ScavTrap::operator=(ScavTrap & rhs)
{
	_name = rhs.getName();
	_hitPoints = rhs.getHitPoints();
	_energyPoints = rhs.getEnergyPoints();
	_attackDamage = rhs.getAttackDamage();
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}
	
void ScavTrap::setEnergyPoints(void)
{
	_energyPoints = 50;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " has entered Gate Keeper mode." << std::endl;
}
