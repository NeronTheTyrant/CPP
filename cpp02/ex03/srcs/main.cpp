/*	Header	*/

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp (Point const a, Point const b, Point const c, Point const point);

int main(void) {

	std::cout << "Test in triangle" << std::endl;
	Point	a(0, 1);
	Point	b(1, 0);
	Point	c(0, 0);
	Point	pt(0.5, 0.5);
	std::cout << "a" << a << " b" << b << " c" << c << " pt" << pt << std::endl;
	std::cout << bsp(a, b, c, pt) << std::endl;
	std::cout << "Test out of triangle" << std::endl;
	std::cout << "a" << a << " b" << b << " c" << pt << " pt" << c << std::endl;
	std::cout << bsp(a, b, pt, c) << std::endl;

	return 0;
}
