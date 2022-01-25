/*	Header	*/

#include "Fixed.hpp"
#include <iostream>

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

int	Fixed::getFractBits (void) const {
	return Fixed::_fractBits;
}

std::ostream & operator<< (std::ostream & o, Fixed const & rhs) {
	o << (rhs.getRawBits() >> rhs.getFractBits()) << ".";
	o << ((rhs.getRawBits() & 0xFF) * 390625) << std::endl;
	return o;
}

//static const int	Fixed::_fractBits = 8;
