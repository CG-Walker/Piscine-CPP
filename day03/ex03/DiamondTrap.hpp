#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
	using ScavTrap::_hitpoints;
	using ScavTrap::_energyPoints;
	using FragTrap::_attackDamage;
	using FragTrap::attack;
public:
	DiamondTrap(std::string name);
	~DiamondTrap(void);

	void whoAmiI(void);
};

#endif