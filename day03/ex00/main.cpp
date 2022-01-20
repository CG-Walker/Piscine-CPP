#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Arthur");
	ClapTrap b("Bob");

	a.attack("Bob");
	b.takeDamage(b.getAttackDamage());
	b.attack("Arthur");
	b.beRepaired(10);

	return 0;
}
