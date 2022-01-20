#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(80), _energyPoints(30), _attackDamage(15) 
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & src)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = src;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap & rhs)
{
	_name = rhs.getName();
	_hitPoints = rhs.getHitPoints();
	_energyPoints = rhs.getEnergyPoints();
	_attackDamage = rhs.getAttackDamage();
	return *this;
}

int ClapTrap::getHitPoints(void)
{
	return (_hitPoints);
}
int ClapTrap::getEnergyPoints(void)
{
	return (_energyPoints);
}

int ClapTrap::getAttackDamage(void)
{
	return (_attackDamage);
}

std::string	ClapTrap::getName(void)
{
	return (_name);
}

void 	ClapTrap::attack(std::string const & target)
{
	std::cout	<< _name << " attack " << target 
				<< ", causing " << _attackDamage << " points of damage !"
				<< std::endl;
 }

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< _name << " receive " << amount << " points of damage !"
				<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout	<< _name << " repair himself, recovering " << amount
				<< " hitpoints !" << std::endl;
}