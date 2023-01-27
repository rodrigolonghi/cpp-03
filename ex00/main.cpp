#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a("Becca");
	ClapTrap	b("John");
	ClapTrap	c(b);
	ClapTrap	d;

	for (int i = 0; i < 11; i++)
		a.attack(b.getName());
	a.beRepaired(10);
	b.beRepaired(5);
	a.takeDamage(1);
	a.takeDamage(1);
	b.takeDamage(1);
	b.takeDamage(1);
	return (0);
}
