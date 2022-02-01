#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	void setEnergyPoints(void);
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap & src);
	virtual ~ScavTrap(void);

	void guardGate(void);

	ScavTrap & operator=(ScavTrap & rhs);
};

#endif