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

//static const int	Fixed::_fractBits = 8;
