#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	void setHitPoints(void);
	void setAttackDamage(void);
public:
	FragTrap(std::string name);
	FragTrap(FragTrap & src);
	virtual ~FragTrap(void);

	void highFivesGuys(void);

	FragTrap & operator=(FragTrap & rhs);
};

#endif