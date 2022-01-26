/*	Header	*/

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a(-42);
	Fixed b(752.54224f);
	Fixed c(74);
	
	//a.setRawBits(2147483647);
	std::cout << "Raw: " << a.getRawBits() << std::endl << "Real: " << a << std::endl;
	std::cout << "Raw: " << b.getRawBits() << std::endl << "Real: " << b << std::endl;
	return 0;
}
