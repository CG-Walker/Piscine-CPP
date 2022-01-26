#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap & src);
	~ScavTrap(void);

	void guardGate(void);

	ScavTrap & operator=(ScavTrap & rhs);
};

#endif