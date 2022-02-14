/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:59 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/14 17:36:58 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat (void)
	: _name("none"), _grade(150) {
//	std::cout << "Bureaucrat: Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
	: _name(copy._name) {
//	std::cout << "Bureaucrat: Copy Constructor" << std::endl;
	this->setGrade(copy._grade);
}

Bureaucrat::Bureaucrat (std::string const & name, int const & grade)
	: _name(name) {
//	std::cout << "Bureaucrat: String & Int Constructor" << std::endl;
	this->setGrade(grade);
}

Bureaucrat::~Bureaucrat (void) {
//	std::cout << "Bureaucrat: Destructor" << std::endl;
}

Bureaucrat &	Bureaucrat::operator= (Bureaucrat const & rhs) {
//	std::cout << "Bureaucrat: Assign Operator" << std::endl;
	this->setGrade(rhs._grade);
	return *this;
}

std::string const &	Bureaucrat::getName (void) const {
	return this->_name;
}

int const &	Bureaucrat::getGrade (void) const {
	return this->_grade;
}

void	Bureaucrat::setGrade (int const & grade) {
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade = grade;
}

void	Bureaucrat::addGrade (void) {
	this->setGrade(this->_grade - 1);
}

void	Bureaucrat::subGrade (void) {
	this->setGrade(this->_grade + 1);
}

void	Bureaucrat::signForm (Form & f) {
	try {
		f.beSigned(*this);
		std::cout << *this << " signed " << f << std::endl;
	}
	catch (std::exception & e) {
		std::cout << *this << " couldn't sign " << f
			<< " because " << e.what() << std::endl;
	}
}

std::ostream &	operator<< (std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
