/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:55:14 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 16:52:46 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal (void)
	: type("Default") {
	std::cout << "Animal: Default Constructor" << std::endl;
}

AAnimal::AAnimal (AAnimal const & copy)
	: type(copy.type) {
	std::cout << "Animal: Copy Constructor" << std::endl;
	*this = copy;
}

AAnimal::AAnimal (std::string const & type)
	: type(type) {
	std::cout << "Animal: Type Constructor" << std::endl;
}

AAnimal::~AAnimal (void) {
	std::cout << "Animal: Destructor" << std::endl;
}

AAnimal &	AAnimal::operator= (AAnimal const & rhs) {
	std::cout << "Animal: Assign Operator" << std::endl;
	this->type = rhs.type;
	return *this;
}

std::string const &	AAnimal::getType (void) const {
	return (this->type);
}
