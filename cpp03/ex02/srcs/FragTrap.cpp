#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap (void) 
	: ClapTrap() {
	std::cout << this->__name << ": FragTrap Default Constructor" << std::endl;
	this->__hp = 100;
	this->__ep = 100;
	this->__ad = 30;
}

FragTrap::FragTrap(FragTrap const & copy) 
	: ClapTrap(copy) {
	std::cout << this->__name << ": FragTrap Copy Constructor" << std::endl;
	*this = copy;
}

FragTrap::FragTrap (std::string const & name)
	: ClapTrap(name) {
	std::cout << this->__name << ": FragTrap Name Constructor" << std::endl;
	this->__hp = 100;
	this->__ep = 100;
	this->__ad = 30;
}

FragTrap::~FragTrap (void) {
	std::cout << this->__name << ": FragTrap Destructor" << std::endl;
}

FragTrap &	FragTrap::operator= (FragTrap const & rhs) {
	std::cout << "FragTrap: Assign Operator" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFivesGuys (void) {
	if (this->__ep == 0 || this->__hp == 0)
	{
		this->__noAct();
		return ;
	}
	std::cout << this->__name << ": Who wants a high five???? Anyone? ...Hello? :(" << std::endl;
}
