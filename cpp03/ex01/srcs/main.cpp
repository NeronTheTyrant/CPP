#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	bob("Bobby");
	ClapTrap	bab("Babba");

	bob.attack("Babba");
	bab.takeDamage(1);
	bab.beRepaired(1);
	bab.attack("Bobby");
	bob.takeDamage(999999);
	bob.beRepaired(100);
	bob = bab;
	bob.beRepaired(100);

	ScavTrap	scav("Scavvy");
	scav.attack("Scavvy");
	
	scav.takeDamage(99);
	ScavTrap scot(scav);
	scot.takeDamage(1);
	scav.beRepaired(49);
	scav.guardGate();
	for (int i = 0; i < 49; i++)
		scav.beRepaired(1);
}
