/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:35:31 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:35:34 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

Fixed::Fixed (void) {
	this->_raw = 0;
	std::cout << "Fixed: Default constructor" << std::endl;
}

Fixed::Fixed (Fixed const & copy) {
	*this = copy;
	std::cout << "Fixed: Copy constructor" << std::endl;
}

Fixed::Fixed (int n) {
	this->_raw = n << Fixed::_fractBits;
	std::cout << "Fixed: Int constructor" << std::endl;
}

Fixed::Fixed (float f) {
	this->_raw = round(f * (1 << Fixed::_fractBits));
	std::cout << "Fixed: Float constructor" << std::endl;
}

Fixed::~Fixed (void) {
	std::cout << "Fixed: Destructor" << std::endl;
}

Fixed &	Fixed::operator= (Fixed const & rhs) {
	this->_raw = rhs._raw;
	std::cout << "Fixed: Assign operator" << std::endl;
	return *this;
}

bool	Fixed::operator> (Fixed const & rhs) const {
	if (this->_raw > rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator< (Fixed const & rhs) const {
	if (this->_raw < rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>= (Fixed const & rhs) const {
	if (this->_raw >= rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<= (Fixed const & rhs) const {
	if (this->_raw <= rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator== (Fixed const & rhs) const {
	if (this->_raw == rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!= (Fixed const & rhs) const {
	if (this->_raw != rhs._raw)
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+ (Fixed const & rhs) const {
	Fixed	tmp;
	tmp._raw = this->_raw + rhs._raw;
	return tmp;
}

Fixed	Fixed::operator- (Fixed const & rhs) const {
	Fixed	tmp;
	tmp._raw = this->_raw - rhs._raw;
	return tmp;
}

Fixed	Fixed::operator* (Fixed const & rhs) const {
	Fixed	tmp;
	tmp._raw = ((int64_t)this->_raw * (int64_t)rhs._raw) / (1 << Fixed::_fractBits);
	return tmp;
}

Fixed	Fixed::operator/ (Fixed const & rhs) const {
	Fixed	tmp;
	tmp._raw = (int64_t)this->_raw * (1 << Fixed::_fractBits) / rhs._raw;
	return tmp;
}

Fixed &	Fixed::operator++ (void) {
	this->_raw++;
	return *this;
}

Fixed	Fixed::operator++ (int) {
	Fixed	tmp(*this);
	operator++();
	return (tmp);
}

Fixed &	Fixed::operator-- (void) {
	this->_raw--;
	return *this;
}

Fixed	Fixed::operator-- (int) {
	Fixed	tmp(*this);
	operator--();
	return (tmp);
}

Fixed &	Fixed::min (Fixed & a, Fixed & b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const &	Fixed::min (Fixed const & a, Fixed const & b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &	Fixed::max (Fixed & a, Fixed & b) {
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const &	Fixed::max (Fixed const & a, Fixed const &  b) {
	if (a > b)
		return (a);
	else
		return (b);
}

int	Fixed::getRawBits (void) const {
	return this->_raw;
}

void	Fixed::setRawBits (int const raw) {
	this->_raw = raw;
}

float	Fixed::toFloat (void) const {
	return double(this->_raw) / double(1 << Fixed::_fractBits);
}

int	Fixed::toInt (void) const {
	return this->_raw >> Fixed::_fractBits;
}

int	Fixed::getFractBits (void) {
	return Fixed::_fractBits;
}

std::ostream & operator<< (std::ostream & o, Fixed const & rhs) {
	int	fpart;

	fpart = rhs.getRawBits() & ((1 << Fixed::getFractBits()) - 1);
//	o << "mask =" << (1 << (Fixed::getFractBits() - 1)) << std::endl;
//	o << "fpart = " << fpart << std::endl;
	if (fpart == 0)
		o << rhs.toInt();
	else
		o << rhs.toFloat();
//		o << rhs.toInt() << "." << (fpart * 390625);
	return o;
}

//static const int	Fixed::_fractBits = 8;
