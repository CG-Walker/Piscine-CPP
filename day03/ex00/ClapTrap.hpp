#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap & src);
	~ClapTrap();

	std::string	getName(void);
	int			getHitPoints(void);
	int			getEnergyPoints(void);
	int			getAttackDamage(void);

	void 	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap & operator=(ClapTrap & rhs);
};

#endif