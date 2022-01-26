/*	Header	*/

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed (void) {
	this->_raw = 0;
	std::cout << "Fixed: Default constructor" << std::endl;
}

Fixed::Fixed (Fixed & copy) {
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

Fixed &	Fixed::operator= (const Fixed & rhs) {
	this->_raw = rhs._raw;
	std::cout << "Fixed: Assign operator" << std::endl;
	return *this;
}


int	Fixed::getRawBits (void) const {
	return this->_raw;
}

void	Fixed::setRawBits (int const raw) {
	this->_raw = raw;
}

float	Fixed::toFloat (void) const {
	return double(this->_raw) / double(1 << this->_fractBits);
}

int	Fixed::toInt (void) const {
	return this->_raw >> this->_fractBits;
}

int	Fixed::getFractBits (void) {
	return Fixed::_fractBits;
}

std::ostream & operator<< (std::ostream & o, Fixed const & rhs) {
	int	fpart;
	
	fpart = rhs.getRawBits() & (1 << (Fixed::getFractBits() - 1));
	if (fpart == 0)
		o << (rhs.getRawBits() >> Fixed::getFractBits());
	else
		o << std::fixed << rhs.toFloat();
	return o;
}

//static const int	Fixed::_fractBits = 8;
