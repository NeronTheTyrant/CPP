/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:40:13 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 19:59:30 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure (void)
	: AMateria("cure") {
	std::cout << "Cure: Default Constructor" << std::endl;
}

Cure::Cure(Cure const & copy)
	: AMateria ("cure") {
	std::cout << "Cure: Copy Constructor" << std::endl;
	*this = copy;
}

Cure::~Cure (void) {
	std::cout << "Cure: Destructor" << std::endl;
}

Cure &	Cure::operator= (Cure const & rhs) {
	std::cout << "Cure: Assign Operator" << std::endl;
	AMateria::operator=(rhs);
	return *this;
}

Cure *	Cure::clone (void) const {
	return new Cure();
}

void	Cure::use (ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
