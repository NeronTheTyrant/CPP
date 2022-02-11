/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:32:29 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 19:59:19 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice (void)
	: AMateria("ice") {
	std::cout << "Ice: Default Constructor" << std::endl;
}

Ice::Ice(Ice const & copy) 
	: AMateria("ice") {
	std::cout << "Ice: Copy Constructor" << std::endl;
	*this = copy;
}

Ice::~Ice (void) {
	std::cout << "Ice: Destructor" << std::endl;
}

Ice &	Ice::operator= (Ice const & rhs) {
	std::cout << "Ice: Assign Operator" << std::endl;
	AMateria::operator=(rhs);
	return *this;
}

Ice *	Ice::clone (void) const {
	return new Ice();
}

void	Ice::use (ICharacter & target) {
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
}
