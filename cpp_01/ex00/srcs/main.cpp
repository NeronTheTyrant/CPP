/* Header */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	bob = Zombie("Bobby");
	Zombie *jim = newZombie("Jimmothy");

	randomChump("Bobbothy");
	delete jim;
	bob.announce();
	return (0);
}
