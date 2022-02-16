/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:45:22 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/16 02:21:30 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
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

//	Form	f // will not compile;
	ShrubberyCreationForm	shrub("shrub");
	RobotomyRequestForm		lobo("Lo-Bo");
	PresidentialPardonForm	gargleblaster("GargleBlaster");

	JASON.executeForm(shrub);
	JASON.executeForm(lobo);
	JASON.executeForm(gargleblaster);
	mrRimmer.signForm(shrub);
	mrRimmer.signForm(lobo);
	mrRimmer.signForm(gargleblaster);
	for (int i = 0; i < 5; i++)
		mrRimmer.addGrade();
	mrRimmer.signForm(shrub);
	SEAAAAN.executeForm(shrub);
	SEAAAAN.signForm(lobo);
	tom.executeForm(lobo);
	tom.signForm(gargleblaster);
	JASON.executeForm(gargleblaster);
	gargleblaster = PresidentialPardonForm("dummy");
	JASON.executeForm(gargleblaster);
}

void	internTest (void) {
	Intern	jeff;

	Form *	f;
	f = jeff.makeForm("shrubbery creation", "bonjour");
	Bureaucrat	JASON("JAAAAAAAAAAASON", 25);
	JASON.signForm(*f);
	JASON.executeForm(*f);
	jeff.makeForm("nonexistant form", "bonjour");
}

int	main (void) {

	makeInvalidBureaucrats();
	makeValidBureaucrats();
//	validForms();
//	invalidForms();
	execTests();
	internTest();
}
