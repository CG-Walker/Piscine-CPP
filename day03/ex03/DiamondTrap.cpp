#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_trap")
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

void DiamondTrap::whoAmiI(void)
{
	std::cout << "DiamondTrap name is " << _name << std::endl;
	std::cout << "ClapTrap name is " << getName() << std::endl;
}