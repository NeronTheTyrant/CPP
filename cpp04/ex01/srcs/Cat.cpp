/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:18:19 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:18:50 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat (void)
	: Animal("Cat"), _brain(new Brain) {
	std::cout << "Cat: Default Constructor" << std::endl;
	this->getBrain()->ideas[1] = "Miaouuuuuuuuu";
}

Cat::Cat(Cat const & copy)
	: Animal(copy.getType()), _brain(new Brain) {
	std::cout << "Cat: Copy Constructor" << std::endl;
	*this = copy;
}

Cat::~Cat (void) {
	std::cout << "Cat: Destructor" << std::endl;
	delete this->_brain;
}

Cat &	Cat::operator= (Cat const & rhs) {
	std::cout << "Cat: Assign Operator" << std::endl;
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
//	*this->_brain = rhs._brain;
	return *this;
}

void	Cat::makeSound (void) const {
	std::cout << "MrrrrrrrrrraaAAAAAAAAAAAAAAAAAAAOOOOOOOOOOOW" << std::endl;
}

Brain *	Cat::getBrain (void) const {
	return this->_brain;
}
