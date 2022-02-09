/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:48:16 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 19:10:00 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria (void)
	: type("NONE") {
	std::cout << "AMateria: Default Constructor" << std::endl;
}

AMateria::AMateria(AMateria const & copy) 
	: type(copy.type) {
	std::cout << "AMateria: Copy Constructor" << std::endl;
	*this = copy;
}

AMateria::~AMateria (void) {
	std::cout << "AMateria: Destructor" << std::endl;
}

AMateria &	AMateria::operator= (AMateria const & rhs) {
	std::cout << "AMateria: Assign Operator" << std::endl;
	//honestly i don't know what to do here??
}

std::string const &	getType (void) const {
	return this->type;
}

void	use (ICharacter & target) {
	std::cout << "* shakes the empty Materia threateningly at "
		<< target.getName() << "... Nothing happens" << std::endl;
}
