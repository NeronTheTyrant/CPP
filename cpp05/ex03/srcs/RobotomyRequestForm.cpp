/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:27:04 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/16 01:53:11 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm (void)
	: Form("default_name", 72, 45) {
	std::cout << "RobotomyRequestForm: Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) {
	std::cout << "RobotomyRequestForm: Copy Constructor" << std::endl;
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm (std::string const & target)
	: Form("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm: Name Constructor" << std::endl;
	this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm (void) {
	std::cout << "RobotomyRequestForm: Destructor" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator= (RobotomyRequestForm const & rhs) {
	std::cout << "RobotomyRequestForm: Assign Operator" << std::endl;
	Form::operator=(rhs);
	return *this;
}

void	RobotomyRequestForm::executeForm (void) const {
	std::cout << "* OBNOXIOUS DRILLING NOISE *" << std::endl;
	std::srand(std::time(NULL));
	if (rand() % 2)
		std::cout << "The robotomy on " << this->getTarget() << " was a success! Now go steal a ship or something!" << std::endl;
	else
		std::cout << "Uh oh, the robotomy on " << this->getTarget() << " didn't work. Better try again!" << std::endl;
}

Form *	newRobotomyRequestForm (std::string const & target) {
	return new RobotomyRequestForm(target);
}
