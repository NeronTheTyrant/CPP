#include "Bureaucrat.hpp"
#include <iostream>

int	main (void) {
	Bureaucrat none;

	try { 
		Bureaucrat Tim("Timmy", 44548545);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat Bob("Bobby", -1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat rene("Rene", 50);
	std::cout << rene << std::endl;
	rene = Bureaucrat ("Random guy", 25);
	std::cout << rene << std::endl;
}
