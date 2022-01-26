#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(std::string name);
	FragTrap(FragTrap & src);
	~FragTrap(void);

	void highFivesGuys(void);

	FragTrap & operator=(FragTrap & rhs);
};

#endif