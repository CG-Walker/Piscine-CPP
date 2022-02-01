#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
}


ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
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
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout	<< "ClapTrap " << _name << " attacks " << target 
					<< ", causing " << _attackDamage << " points of damage !"
					<< std::endl;
		_energyPoints -= 1;
	}
	else if (_energyPoints <= 0)
		std::cout	<< "ClapTrap " << _name << " has not enough energy to attack ! (" << _energyPoints << ")" << std::endl;
 	else if (_hitPoints <= 0)
		std::cout	<< "ClapTrap " << _name << " has not enough hitpoint to attack ! (" << _hitPoints << ")" << std::endl;

 }

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << _name << " receive " << amount << " points of damage !"
				<< std::endl;
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout	<< "ClapTrap " << _name << " repair himself, recovering " 
					<< amount << " hitpoints !"
					<< std::endl;
		_energyPoints -= 1;
		_hitPoints += amount;
	}
	else if (_energyPoints <= 0)
		std::cout	<< "ClapTrap " << _name << " has not enough energy to repair ! (" << _energyPoints << ")" << std::endl;
	else if (_hitPoints <= 0)
		std::cout	<< "ClapTrap " << _name << " has not enough hitpoint to repair ! (" << _hitPoints << ")" << std::endl;

}