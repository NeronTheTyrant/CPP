#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap (void)
	: ClapTrap() {
	std::cout << this->__name << ": ScavTrap Default Constructor" << std::endl;
	this->initHP();
	this->initEP();
	this->initAD();
}

ScavTrap::ScavTrap (ScavTrap const & copy)
	: ClapTrap(static_cast<ClapTrap>(copy)) {
	std::cout << this->__name << ": ScavTrap Copy Constructor" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap (const std::string & name)
	: ClapTrap(name) {
	std::cout << this->__name << ": ScavTrap Name Constructor" << std::endl;
	this->initHP();
	this->initEP();
	this->initAD();
}

ScavTrap::~ScavTrap (void) {
	std::cout << this->__name << ": ScavTrap Destructor" << std::endl;
}

ScavTrap &	ScavTrap::operator= (ScavTrap const & rhs) {
	std::cout << "ScavTrap: Assign Operator" << std::endl;
	ClapTrap::operator=(rhs);
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
	if (this->__ep == 0 || this->__hp == 0)
	{
		this->__noAct();
		return ;
	}
	std::cout << this->__name << " is now in Gate Keeping mode. Insert a joke about being a gatekeeper." << std::endl;
}

void	ScavTrap::initHP (void) {
	this->__hp = 100;
}

void	ScavTrap::initEP (void) {
	this->__ep = 50;
}

void	ScavTrap::initAD (void) {
	this->__ad = 20;
}
