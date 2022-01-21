/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:40:51 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 18:55:27 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/* Creator & Destructor */

Zombie::Zombie (void) : _name("default") {
	std::cout << this->_name << ":a new Zombie is born!" << std::endl;
}

Zombie::Zombie (std::string name) : _name(name) {
	std::cout << this->_name << ": a new Zombie is born!" << std::endl;
}

Zombie::~Zombie (void) {
	std::cout << this->_name << ": a Zombie has died" << std::endl;
}

void	Zombie::setName (std::string name) {
	this->_name = name;
}

void	Zombie::announce (void) {
	std::cout << this->_name << ": BraiiiinzzzzZ" << std::endl;
}
