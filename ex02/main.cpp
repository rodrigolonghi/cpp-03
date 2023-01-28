#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a("Becca");
	ScavTrap	b("John");
	FragTrap	c("Max");

	for (int i = 0; i < 11; i++)
		a.attack(b.getName());
	b.attack(a.getName());
	c.attack(b.getName());
	a.beRepaired(10);
	b.beRepaired(5);
	c.beRepaired(1);
	a.takeDamage(1);
	a.takeDamage(1);
	b.takeDamage(1);
	b.takeDamage(1);
	c.takeDamage(1);
	c.takeDamage(1);
	b.guardGate();
	c.highFivesGuys();
	return (0);
}
