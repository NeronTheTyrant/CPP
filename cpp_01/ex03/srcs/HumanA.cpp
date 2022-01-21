/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:48:07 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 22:23:09 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA (std::string name, Weapon & weapon) : _name(name), _weapon(weapon) {
	std::cout << this->_name << ": new HumanA with " << this->_weapon.getType() << std::endl;
}
HumanA::~HumanA (void) {
	std::cout << this->_name << ": HumanA is dead" << std::endl;
}

std::string	HumanA::getName(void) {
	return this->_name;
}

Weapon &	HumanA::getWeapon(void) {
	return this->_weapon;
}

void		HumanA::setName(std::string name) {
	this->_name = name;
}

void		HumanA::setWeapon(Weapon & weapon) {
	this->_weapon = weapon;
}

void		HumanA::attack (void) {
	std::cout << this->_name << ": attacks with their "
		<< this->_weapon.getType() << std::endl;
}
