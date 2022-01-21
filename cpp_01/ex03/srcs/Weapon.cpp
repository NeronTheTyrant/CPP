/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:17:12 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 22:38:35 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon (std::string type) : _type(type) {}

Weapon::~Weapon (void) {}

std::string	Weapon::getType(void) {
	return this->_type;
}

void		Weapon::setType(std::string type) {
	this->_type = type;
}
