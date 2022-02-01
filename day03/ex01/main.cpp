#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("Arthur");
	ScavTrap b("Bob");

	a.attack("Bob");
	b.takeDamage(a.getAttackDamage());
	b.attack("Arthur");
	a.takeDamage(b.getAttackDamage());
	a.beRepaired(10);
	b.guardGate();

	return 0;
}
