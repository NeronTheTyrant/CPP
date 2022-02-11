/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:25:34 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 19:06:05 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>

Character::Character (void) 
	: _name("defaultName") {
	std::cout << "Character: Default Constructor" << std::endl;
}

Character::Character(Character const & copy) {
	std::cout << "Character: Copy Constructor" << std::endl;
	*this = copy;
}

Character::Character (std::string const & name) 
	: _name(name) {
	std::cout << "Character: Name Constructor" << std::endl;
}

Character::~Character (void) {
	std::cout << "Character: Destructor" << std::endl;
}

Character &	Character::operator= (Character const & rhs) {
	std::cout << "Character: Assign Operator" << std::endl;
	this->_name = rhs._name;
	this->_inv = rhs._inv;
	return *this;
}

std::string const &	Character::getName (void) const {
	return this->_name;
}

void	Character::equip (AMateria * m) {
	this->_inv.add(m);
}

void	Character::unequip (int idx) {
	this->_inv.remove(idx);
}

void	Character::use (int idx, ICharacter & target) {
	AMateria *materia = this->_inv.getMateria(idx);
	if (materia == NULL)
		return ;
	materia->use(target);
}
