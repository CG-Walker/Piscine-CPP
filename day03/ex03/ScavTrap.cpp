#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " has entered Gate Keeper mode." << std::endl;
}