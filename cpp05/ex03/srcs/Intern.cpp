/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:40:42 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/16 02:09:39 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern (void) {
	std::cout << "Intern: Default Constructor" << std::endl;
}

Intern::Intern(Intern const & copy) {
	std::cout << "Intern: Copy Constructor" << std::endl;
	*this = copy;
}

Intern::~Intern (void) {
	std::cout << "Intern: Destructor" << std::endl;
}

Intern &	Intern::operator= (Intern const & rhs) {
	std::cout << "Intern: Assign Operator" << std::endl;
	(void)rhs;
	return *this;
}

Form *	Intern::makeForm (std::string const & name, std::string const & target) {
	for (int i = 0; i < 3; i++)
	{
		if (name == Intern::_formCatalog[i].name)
		{
			Form *	f = Intern::_formCatalog[i].f(target);
			std::cout << "Intern creates " << f->getName() << std::endl;
			return f;
		}
	}
	std::cout << "Intern has no idea what you mean by " << name
		<< ", so he brings you coffee instead." << std::endl;
	return (NULL);
}

formItem const Intern::_formCatalog[3] = {
			{"presidential pardon", &newPresidentialPardonForm},
			{"robotomy request", &newRobotomyRequestForm},
			{"shrubbery creation", &newShrubberyCreationForm}
};
