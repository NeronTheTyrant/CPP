#include "ClapTrap.hpp"

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
}
