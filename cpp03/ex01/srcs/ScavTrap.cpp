#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap (void)
	: ClapTrap() {
	std::cout << this->__name << ": ScavTrap Default Constructor" << std::endl;
	this->__hp = 100;
	this->__ep = 50;
	this->__ad = 20;
}

ScavTrap::ScavTrap (ScavTrap const & copy)
	: ClapTrap(static_cast<ClapTrap>(copy)) {
	std::cout << this->__name << ": ScavTrap Copy Constructor" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap (const std::string & name)
	: ClapTrap(name) {
	std::cout << this->__name << ": ScavTrap Name Constructor" << std::endl;
	this->__hp = 100;
	this->__ep = 50;
	this->__ad = 20;
}

ScavTrap::~ScavTrap (void) {
	std::cout << this->__name << ": ScavTrap Destructor" << std::endl;
}

ScavTrap &	ScavTrap::operator= (ScavTrap const & rhs) {
	std::cout << "ScavTrap: Assign Operator" << std::endl;
	this->__name = rhs.__name;
	this->__hp = rhs.__hp;
	this->__ep = rhs.__ep;
	this->__ad = rhs.__ad;
	return *this;
}

void	ScavTrap::attack (const std::string & target) {
	if (this->__ep == 0 || this->__hp == 0)
	{
		this->__noAct();
		return ;
	}
	std::cout << this->__name << " attacks " << target 
		<< " with a piece of metal, causing " 
		<< this->__ad << " points of damage." << std::endl;
	this->__ep -= 1;
}

void	ScavTrap::guardGate (void) {
	std::cout << this->__name << " is now in Gate Keeping mode. Insert a joke about being a gatekeeper." << std::endl;
}
