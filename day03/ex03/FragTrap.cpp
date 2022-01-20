#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys ! High Fives !" << std::endl;
}