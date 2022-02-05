/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:18:19 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/04 22:19:03 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat (void)
	: Animal("Cat") {
	std::cout << "Cat: Default Constructor" << std::endl;
}

Cat::Cat(Cat const & copy)
	: Animal() {
	std::cout << "Cat: Copy Constructor" << std::endl;
	*this = copy;
}

Cat::~Cat (void) {
	std::cout << "Cat: Destructor" << std::endl;
}

Cat &	Cat::operator= (Cat const & rhs) {
	std::cout << "Cat: Assign Operator" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	Cat::makeSound (void) const {
	std::cout << "MrrrrrrrrrraaAAAAAAAAAAAAAAAAAAAOOOOOOOOOOOW" << std::endl;
}
