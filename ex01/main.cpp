#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a("Becca");
	ScavTrap	b("John");

	for (int i = 0; i < 11; i++)
		a.attack(b.getName());
	b.attack(a.getName());
	a.beRepaired(10);
	b.beRepaired(5);
	a.takeDamage(1);
	a.takeDamage(1);
	b.takeDamage(1);
	b.takeDamage(1);
	b.guardGate();
	return (0);
}
