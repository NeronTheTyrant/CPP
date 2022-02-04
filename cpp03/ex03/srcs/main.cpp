#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	bob("Bobby");
	ClapTrap	bab("Babba");

	std::cout << "ClapTrap Tests" << std::endl << std::endl;

	bob.attack("Babba");
	bab.takeDamage(1);
	bab.beRepaired(1);
	bab.attack("Bobby");
	bob.takeDamage(999999);
	bob.beRepaired(100);
	bob = bab;
	bob.beRepaired(100);

	std::cout << std::endl << "ScavTrap Tests" << std::endl << std::endl;
	ScavTrap	scav("Scavvy");
	scav.attack("Scavvy");
	
	scav.takeDamage(99);
	ScavTrap scot(scav);
	scot.takeDamage(1);
	scav.beRepaired(49);
	scav.guardGate();
	for (int i = 0; i < 49; i++)
		scav.beRepaired(1);

	std::cout << std::endl << "FragTrap Tests" << std::endl << std::endl;

	FragTrap frag("Fraggy");
	FragTrap shag("Shaggy");

	frag.attack("Shaggy");
	shag.takeDamage(30);
	shag.attack("Fraggy");
	frag.takeDamage(60);
	frag.beRepaired(50);
	frag.attack("Shaggy");
	shag.takeDamage(70);
	frag.highFivesGuys();

	FragTrap shaggycopy(shag);
	FragTrap fraggycopy(frag);
	shaggycopy.highFivesGuys();
	fraggycopy.beRepaired(100);
	shaggycopy = fraggycopy;
	shaggycopy.highFivesGuys();
	shaggycopy.takeDamage(500000);
	
	std::cout << std::endl << "DiamondTrap Tests" << std::endl << std::endl;

	DiamondTrap	jerma("Jeremy");
	DiamondTrap	jeromy("Jeromy");

	jerma.attack("Jeromy");
	jerma.takeDamage(50);
	jerma.beRepaired(10000);
	jerma.guardGate();
	jerma.highFivesGuys();
	jerma.whoAmI();
	jeromy.whoAmI();
}
