#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap a("Arthur");
	ScavTrap b("Bob");
	FragTrap c("Claude");
	DiamondTrap d("Daniel");

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.attack(a.getName());
	b.beRepaired(10);
	b.guardGate();
	c.attack(a.getName());
	c.highFivesGuys();
	d.attack(c.getName());
	d.highFivesGuys();
	d.whoAmiI();

	return 0;
}
