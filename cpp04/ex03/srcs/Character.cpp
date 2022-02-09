#include "Character.hpp"
#include <iostream>

Character::Character (void) {
	std::cout << "Character: Default Constructor" << std::endl;
}

Character::Character(Character const & copy) {
	std::cout << "Character: Copy Constructor" << std::endl;
	*this = copy;
}

Character::~Character (void) {
	std::cout << "Character: Destructor" << std::endl;
}

Character &	Character::operator= (Character const & rhs) {
	std::cout << "Character: Assign Operator" << std::endl;
}