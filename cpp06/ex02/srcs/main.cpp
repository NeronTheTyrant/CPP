#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

class Base {
	public: 
	virtual ~Base (void) {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *	generate (void) {
	std::srand(std::time(NULL));
	switch (rand() % 3) {
		case 0 : return new A;
		case 1 : return new B;
		case 2 : return new C;
	}
	return NULL;
}

void	identify (Base * p) {
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "It's a A!" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "It's a B!" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "It's a C!" << std::endl;
}

void	identify (Base & p) {
	try {
		dynamic_cast<A &>(p);
		std::cout << "It's a A!" << std::endl;
	}
	catch (std::exception & e) {}
	try {
		dynamic_cast<B &>(p);
		std::cout << "It's a B!" << std::endl;
	}
	catch (std::exception & e) {}
	try {
		dynamic_cast<C &>(p);
		std::cout << "It's a C!" << std::endl;
	}
	catch (std::exception & e) {}
}

int	main (void) {
	Base *p = generate();
	identify(p);
	identify(*p);
}
