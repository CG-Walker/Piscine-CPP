#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("Arthur");
	ScavTrap b("Bob");

	a.attack("Bob");
	b.takeDamage(a.getAttackDamage());
	b.attack("Arthur");
	b.beRepaired(10);
	b.guardGate();

	return 0;
}
