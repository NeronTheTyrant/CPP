/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:30:36 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:12:07 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain (void) {
	std::cout << "Brain: Default Constructor" << std::endl;
}

Brain::Brain(Brain const & copy) {
	std::cout << "Brain: Copy Constructor" << std::endl;
	*this = copy;
}

Brain::~Brain (void) {
	std::cout << "Brain: Destructor" << std::endl;
}

Brain &	Brain::operator= (Brain const & rhs) {
	std::cout << "Brain: Assign Operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

std::string const &	Brain::getFirstThought (void) const {
	return (this->ideas[1]);
}
