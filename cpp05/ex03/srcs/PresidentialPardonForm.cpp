/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:40:52 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/16 01:17:31 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm (void)
	: Form("default_name", 25, 5) {
	std::cout << "PresidentialPardonForm: Default Constructor" << std::endl;
	this->setTarget("default_target");
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) {
	std::cout << "PresidentialPardonForm: Copy Constructor" << std::endl;
	*this = copy;
}

PresidentialPardonForm::PresidentialPardonForm (std::string const & target)
	: Form("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm: Name Constructor" << std::endl;
	this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm (void) {
	std::cout << "PresidentialPardonForm: Destructor" << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator= (PresidentialPardonForm const & rhs) {
	std::cout << "PresidentialPardonForm: Assign Operator" << std::endl;
	Form::operator=(rhs);
	return *this;
}

void	PresidentialPardonForm::executeForm (void) const {
	std::cout << "Zaphod Beeblebrox ingests one too many Pan Galactic Gargle Blasters and pardons "
		<< this->getTarget() << "." << std::endl;
}

Form *	newPresidentialPardonForm (std::string const & target) {
	return new PresidentialPardonForm(target);
}
