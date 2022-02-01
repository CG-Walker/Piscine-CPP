#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap & src);
	~DiamondTrap(void);

	void attack(const std::string & target);
	DiamondTrap & operator=(DiamondTrap & rhs);

	void whoAmiI(void);
};

#endif