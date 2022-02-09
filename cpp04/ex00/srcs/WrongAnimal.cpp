/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:44:58 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 15:44:59 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal (void)
	: type("default") {
	std::cout << "WrongAnimal: Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy) 
	: type(copy.type) {
	std::cout << "WrongAnimal: Copy Constructor" << std::endl;
	*this = copy;
}

WrongAnimal::WrongAnimal (std::string const & type)
	: type(type) {
	std::cout << "WrongAnimal: Type Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal (void) {
	std::cout << "WrongAnimal: Destructor" << std::endl;
}

WrongAnimal &	WrongAnimal::operator= (WrongAnimal const & rhs) {
	std::cout << "WrongAnimal: Assign Operator" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	WrongAnimal::makeSound (void) const {
	std::cout << "Wrong Animal Sound!!!!" << std::endl;
	return ;
}

std::string const &	WrongAnimal::getType (void) const {
	return this->type;
}
