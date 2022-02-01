#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Arthur");
	ClapTrap b("Bob");

	a.attack("Bob");
	b.takeDamage(b.getAttackDamage());
	b.takeDamage(50);
	b.attack("Arthur");
	b.beRepaired(5);
	a.beRepaired(5);

	return 0;
}
