/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:45:22 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/15 19:33:34 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
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
	try {
		rene.subGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
/*
void	validForms (void) {
	Form	f("dummy form", 150, 150);
	Form	g("gummy form", 25, 3);

	std::cout << f << std::endl;
	std::cout << g << std::endl;
	Bureaucrat	bob ("Bobby \"Big Man\" Smalldude", 1);
	Bureaucrat	bub ("Bubsy \"3D\" The Cat", 150);
	bob.signForm(g);
	bub.signForm(f);
	bub.signForm(g);
}

void	invalidForms (void) {
	try {
		Form	toohigh("Too High", -42, 50);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form	toolow("Too Low", 50, 872522);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
*/
void	execTests (void) {
	Bureaucrat	tom("Tommy", 25);
	Bureaucrat	SEAAAAN("SEAAAAAAAAAAAAAAAAAN", 50);
	Bureaucrat	JASON("JAAAASOOOOON", 1);
	Bureaucrat	mrRimmer("Mr. Rimmer", 150);

	Form *	meta;
	(void)meta;
	ShrubberyCreationForm	shrub("shrub");
	RobotomyRequestForm		lobo("Lo-Bo");
	PresidentialPardonForm	gargleblaster("GargleBlaster");

	JASON.executeForm(shrub);
	JASON.executeForm(lobo);
	JASON.executeForm(gargleblaster);
}

int	main (void) {

	makeInvalidBureaucrats();
	makeValidBureaucrats();
//	validForms();
//	invalidForms();
	execTests();

}
