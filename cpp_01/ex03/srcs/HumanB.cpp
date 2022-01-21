/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:05:54 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 22:36:45 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB (std::string name) : _name(name) {
	this->_weapon = NULL;
	std::cout << this->_name << ": new HumanB" << std::endl;
}
HumanB::~HumanB (void) {
	std::cout << this->_name << ": HumanB is dead" << std::endl;
}

std::string	HumanB::getName (void) {
	return this->_name;
}

Weapon *	HumanB::getWeapon (void) {
	return this->_weapon;
}

void		HumanB::setName (std::string name) {
	this->_name = name;
}

void		HumanB::setWeapon (Weapon &weapon) {
	this->_weapon = &weapon;
}

void		HumanB::attack (void) {
	std::cout << this->_name << ": attacks with their ";
	if (this->_weapon == NULL)
		std::cout << "bare hands" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}
