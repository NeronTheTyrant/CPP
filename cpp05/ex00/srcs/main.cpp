/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:39:25 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/14 17:40:12 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void	makeInvalidBureaucrats (void) {
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
}

void	makeValidBureaucrats (void) {
	Bureaucrat rene("Rene", 50);
	std::cout << rene << std::endl;
	rene = Bureaucrat ("Random guy", 25);
	std::cout << rene << std::endl;

	rene.addGrade();
	std::cout << rene << std::endl;
	rene = Bureaucrat("whatever", 150);
	std::cout << rene << std::endl;
	try {
		rene.subGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

int	main (void) {

	makeInvalidBureaucrats();
	makeValidBureaucrats();
}
