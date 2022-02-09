#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource (void) {
	std::cout << "MateriaSource: Default Constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & copy) {
	std::cout << "MateriaSource: Copy Constructor" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource (void) {
	std::cout << "MateriaSource: Destructor" << std::endl;
}

MateriaSource &	MateriaSource::operator= (MateriaSource const & rhs) {
	std::cout << "MateriaSource: Assign Operator" << std::endl;
}