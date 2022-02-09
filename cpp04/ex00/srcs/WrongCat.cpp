/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:45:27 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 15:58:10 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat (void) 
	: WrongAnimal("Cat") {
	std::cout << "WrongCat: Default Constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy) 
	: WrongAnimal() {
	std::cout << "WrongCat: Copy Constructor" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat (void) {
	std::cout << "WrongCat: Destructor" << std::endl;
}

WrongCat &	WrongCat::operator= (WrongCat const & rhs) {
	std::cout << "WrongCat: Assign Operator" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	WrongCat::makeSound (void) const {
	std::cout << "Wrong Cat Sound!!!!!!!!!" << std::endl;
}
