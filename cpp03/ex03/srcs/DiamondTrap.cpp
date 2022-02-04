/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:14:12 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:24:04 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap (void)
	: ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), __name("default") {
	std::cout << this->__name << ": DiamondTrap Default Constructor" << std::endl;
	FragTrap::initHP();
	ScavTrap::initEP();
	FragTrap::initAD();
}

DiamondTrap::DiamondTrap (std::string const & name)
	: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), __name(name) {
	std::cout << this->__name << ": DiamondTrap Name Constructor" << std::endl;
	FragTrap::initHP();
	ScavTrap::initEP();
	FragTrap::initAD();
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy) {
	*this = copy;
	std::cout << this->__name << ": DiamondTrap Copy Constructor" << std::endl;
}

DiamondTrap::~DiamondTrap (void) {
	std::cout << this->__name << ": DiamondTrap Destructor" << std::endl;
}

DiamondTrap &	DiamondTrap::operator= (DiamondTrap const & rhs) {
	std::cout << "DiamondTrap: Assign Operator" << std::endl;
	this->__name = rhs.__name;
	this->ClapTrap::__name = rhs.ClapTrap::__name;
	this->__hp = rhs.__hp;
	this->__ep = rhs.__ep;
	this->__ad = rhs.__ad;
	return *this;
}

void	DiamondTrap::whoAmI (void) {
	std::cout << "Hello! My name is " << this->__name
		<< ", and my Subobject's name is " << this->ClapTrap::__name << std::endl;
}
