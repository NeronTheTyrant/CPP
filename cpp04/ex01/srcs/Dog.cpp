/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:18:01 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:16:59 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog (void)
	: Animal("Dog"), _brain(new Brain) {
	std::cout << "Dog: Default Constructor" << std::endl;
	this->getBrain()->ideas[1] = "Bork bork bork";
}

Dog::Dog(Dog const & copy)
	: Animal(copy.getType()), _brain(new Brain) {
	std::cout << "Dog: Copy Constructor" << std::endl;
	*this = copy;
}

Dog::~Dog (void) {
	std::cout << "Dog: Destructor" << std::endl;
	delete this->_brain;
}

Dog &	Dog::operator= (Dog const & rhs) {
	std::cout << "Dog: Assign Operator" << std::endl;
	*(this->_brain) = *(rhs._brain);
	return *this;
}

void	Dog::makeSound (void) const {
	std::cout << "Awoooooooooo~" << std::endl;
}

Brain *	Dog::getBrain (void) const {
	return this->_brain;
}
