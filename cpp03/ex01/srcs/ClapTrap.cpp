#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap (void)
	: __name("default"), __hp(10), __ep(10), __ad(0){
	std::cout << this->__name << ": ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap (std::string const & name)
	: __name(name), __hp(10), __ep(10), __ad(0) {
	std::cout << this->__name << ": ClapTrap name constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy) {
	std::cout << this->__name << ": ClapTrap copy constructor" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap (void) {
	std::cout << this->__name << ": ClapTrap destructor" << std::endl;
}

ClapTrap &	ClapTrap::operator= (ClapTrap const & rhs) {
	std::cout << this->__name << ": ClapTrap assign operator" << std::endl;
	this->__name = rhs.__name;
	this->__hp = rhs.__hp;
	this->__ep = rhs.__ep;
	this->__ad = rhs.__ad;
	return *this;
}

void	ClapTrap::attack (const std::string & target) {
	if (this->__ep == 0 || this->__hp == 0)
	{
		this->__noAct();
		return ;
	}
	std::cout << this->__name << " attacks " << target 
		<< ", causing " << this->__ad << " points of damage." << std::endl;
	this->__ep -= 1;
}

void	ClapTrap::takeDamage (unsigned int amount) {
	if (this->__ep == 0 || this->__hp == 0)
	{
		this->__noAct();
		return ;
	}
	std::cout << this->__name << " takes "
		<< amount << " points of damage." << std::endl;
	if (amount < this->__hp)
		this->__hp -= amount;
	else
	{
		this->__hp = 0;
		std::cout << this->__name << " is K.O" << std::endl;
	}
}

void	ClapTrap::beRepaired (unsigned int amount) {
	if (this->__ep == 0 || this->__hp == 0)
	{
		this->__noAct();
		return ;
	}
	std::cout << this->__name << " is repaired for "
		<< amount << " HP." << std::endl;
	this->__ep -= 1;
}

void	ClapTrap::__noAct (void) {
	if (this->__hp == 0)
		std::cout << this->__name << " has no HP and cannot act." << std::endl;
	else if (this->__ep == 0)
		std::cout << this->__name << " has no EP and cannot act." << std::endl;
}
