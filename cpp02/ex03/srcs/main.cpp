/*	Header	*/

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp (Point const a, Point const b, Point const c, Point const point);

int main(void) {

	Point	a(0, 1);
	Point	b(1, 0);
	Point	c(0, 0);
	Point	pt(0.25, 0.25);
	Point	pt2(2, 2);
	Point	pt3(0, 0.5);
	Point	pt4(0, 1);
	std::cout << "Point in triangle" << std::endl;
	std::cout << "a" << a << " b" << b << " c" << c << " pt" << pt << std::endl;
	std::cout << bsp(a, b, c, pt) << std::endl;
	std::cout << "Point out of triangle" << std::endl;
	std::cout << "a" << a << " b" << b << " c" << c << " pt" << pt2 << std::endl;
	std::cout << bsp(a, b, c, pt2) << std::endl;
	std::cout << "Point in side" << std::endl;
	std::cout << "a" << a << " b" << b << " c" << c << " pt" << pt3 << std::endl;
	std::cout << bsp(a, b, c, pt3) << std::endl;
	std::cout << "Point is vertex" << std::endl;
	std::cout << "a" << a << " b" << b << " c" << c << " pt" << pt4 << std::endl;
	std::cout << bsp(a, b, c, pt4) << std::endl;

	return 0;
}
