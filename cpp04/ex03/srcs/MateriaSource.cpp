/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:45:49 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 19:08:27 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource (void) {
	std::cout << "MateriaSource: Default Constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & copy) {
	std::cout << "MateriaSource: Copy Constructor" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource (void) {
	std::cout << "MateriaSource: Destructor" << std::endl;
}

MateriaSource &	MateriaSource::operator= (MateriaSource const & rhs) {
	std::cout << "MateriaSource: Assign Operator" << std::endl;
	this->_inv = rhs._inv;
	return *this;
}

void	MateriaSource::learnMateria (AMateria * m) {
	this->_inv.add(m);
}

AMateria *	MateriaSource::createMateria (std::string const & type) {
	AMateria * m = this->_inv.getMateria(type);
	if (m == NULL)
		return NULL;
	return m->clone();
}
