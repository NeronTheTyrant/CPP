/* Header */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie (std::string name) : _name(name) {

	std::cout << this->_name << ": a new Zombie is born!" << std::endl;
}

Zombie::~Zombie (void) {
	std::cout << this->_name << ": a Zombie has died" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiinzzzzzZ" << std::endl;
}
