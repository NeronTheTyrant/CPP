#include <iostream>
#include <stdint.h>

struct Data {
	int	x;
	int	y;
	char	c;
};

uintptr_t	serialize(Data * ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *	deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int	main (void) {
	uintptr_t val;
	Data	d;
	d.x = 15;
	d.y = 45;
	d.c = 'h';
	std::cout << &d << std::endl;
	val = serialize(&d);
	std::cout << "0x" << std::hex << val << std::dec << std::endl;
	Data * ptr = deserialize(val);
	std::cout << ptr->x << std::endl;
	std::cout << ptr->y << std::endl;
	std::cout << ptr->c << std::endl;
}
