#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap (void)
	: _name("default"), _hp(10), _ep(10), _ad(0){
	std::cout << this->_name << ": ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap (std::string const & name)
	: _name(name), _hp(10), _ep(10), _ad(0) {
	std::cout << this->_name << ": ClapTrap name constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy) {
	std::cout << this->_name << ": ClapTrap copy constructor" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap (void) {
	std::cout << this->_name << ": ClapTrap destructor" << std::endl;
}

ClapTrap &	ClapTrap::operator= (ClapTrap const & rhs) {
	std::cout << this->_name << ": ClapTrap assign operator" << std::endl;
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return *this;
}

void	ClapTrap::attack (const std::string & target) {
	if (this->_ep == 0 || this->_hp == 0)
	{
		this->_noAct();
		return ;
	}
	std::cout << this->_name << " attacks " << target 
		<< ", causing " << this->_ad << " points of damage." << std::endl;
	this->_ep -= 1;
}

void	ClapTrap::takeDamage (unsigned int amount) {
	if (this->_ep == 0 || this->_hp == 0)
	{
		this->_noAct();
		return ;
	}
	std::cout << this->_name << " takes "
		<< amount << " points of damage." << std::endl;
	if (amount < this->_hp)
		this->_hp -= amount;
	else
	{
		this->_hp = 0;
		std::cout << this->_name << " is K.O" << std::endl;
	}
}

void	ClapTrap::beRepaired (unsigned int amount) {
	if (this->_ep == 0 || this->_hp == 0)
	{
		this->_noAct();
		return ;
	}
	std::cout << this->_name << " is repaired for "
		<< amount << " HP." << std::endl;
	this->_ep -= 1;
}

void	ClapTrap::_noAct (void) {
	if (this->_hp == 0)
		std::cout << this->_name << " has no HP and cannot act." << std::endl;
	else if (this->_ep == 0)
		std::cout << this->_name << "has no EP and cannot act." << std::endl;
}
