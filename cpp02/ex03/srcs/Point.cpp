/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:31:09 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/28 19:31:30 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point (void) : _x(0), _y(0) { 
//	std::cout << "Point: Default Constructor" << std::endl;
}

Point::Point (Point const & copy) : _x(copy._x), _y(copy._y) {
//	std::cout << "Point: Copy Constructor" << std::endl;
	*this = copy;
}

Point::Point (float const x, float const y) : _x(x), _y(y) {
//	std::cout << "Point: Float Constructor" << std::endl;
}

Point::~Point (void) {
//	std::cout << "Point: Destructor" << std::endl;
}

Point &	Point::operator= (Point const & rhs) {
//	std::cout << "Point: Assign Operator" << std::endl;
	(void)rhs;
	return *this;
}

Fixed	Point::getX (void) const {
	return this->_x;
}

Fixed	Point::getY (void) const {
	return this->_y;
}

bool	operator==(Point const & lhs, Point const & rhs) {
	if (lhs.getX() != rhs.getX() || lhs.getY() != rhs.getY())
		return (false);
	else
		return (true);
}

std::ostream &	operator<<(std::ostream & o, Point const & rhs) {
	o << "(" << rhs.getX() << "," << rhs.getY() << ")";
	return o;
}
