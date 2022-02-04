/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:31:09 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:37:01 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point (void) : _x(0), _y(0) { 
}

Point::Point (Point const & copy) : _x(copy._x), _y(copy._y) {
	*this = copy;
}

Point::Point (float const x, float const y) : _x(x), _y(y) {
}

Point::~Point (void) {
}

Point &	Point::operator= (Point const & rhs) {
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
