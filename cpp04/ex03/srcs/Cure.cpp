#include "Cure.hpp"
#include <iostream>

Cure::Cure (void) {
	std::cout << "Cure: Default Constructor" << std::endl;
}

Cure::Cure(Cure const & copy) {
	std::cout << "Cure: Copy Constructor" << std::endl;
	*this = copy;
}

Cure::~Cure (void) {
	std::cout << "Cure: Destructor" << std::endl;
}

Cure &	Cure::operator= (Cure const & rhs) {
	std::cout << "Cure: Assign Operator" << std::endl;
}