/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:55:14 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:19:49 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal (void)
	: type("Default") {
	std::cout << "Animal: Default Constructor" << std::endl;
}

Animal::Animal (Animal const & copy)
	: type(copy.type) {
	std::cout << "Animal: Copy Constructor" << std::endl;
	*this = copy;
}

Animal::Animal (std::string const & type)
	: type(type) {
	std::cout << "Animal: Type Constructor" << std::endl;
}

Animal::~Animal (void) {
	std::cout << "Animal: Destructor" << std::endl;
}

Animal &	Animal::operator= (Animal const & rhs) {
	std::cout << "Animal: Assign Operator" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	Animal::makeSound (void) const {
	return ;
}

std::string const &	Animal::getType (void) const {
	return (this->type);
}

Brain *	Animal::getBrain (void) const {
	return NULL;
}
