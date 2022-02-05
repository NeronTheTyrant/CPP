/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:18:01 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/04 22:18:10 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog (void)
	: Animal("Dog") {
	std::cout << "Dog: Default Constructor" << std::endl;
}

Dog::Dog(Dog const & copy)
	: Animal() {
	std::cout << "Dog: Copy Constructor" << std::endl;
	*this = copy;
}

Dog::~Dog (void) {
	std::cout << "Dog: Destructor" << std::endl;
}

Dog &	Dog::operator= (Dog const & rhs) {
	std::cout << "Dog: Assign Operator" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	Dog::makeSound (void) const {
	std::cout << "Awoooooooooo~" << std::endl;
}
