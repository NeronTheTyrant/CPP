/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:54:02 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/14 17:44:15 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form (void)
	: _name("none"), _signed(0), _signGrade(150), _execGrade(150) {
//	std::cout << "Form: Default Constructor" << std::endl;
}

Form::Form(Form const & copy) {
//	std::cout << "Form: Copy Constructor" << std::endl;
	*this = copy;
}

Form::Form (std::string const & name, int signGrade, int execGrade)
	: _name(name), _signed(0) {
//	std::cout << "Form: Full Constructor" << std::endl;
	this->setSignGrade(signGrade);
	this->setExecGrade(execGrade);
}

Form::~Form (void) {
//	std::cout << "Form: Destructor" << std::endl;
}

Form &	Form::operator= (Form const & rhs) {
//	std::cout << "Form: Assign Operator" << std::endl;
	this->_name = rhs._name;
	this->_signed = rhs._signed;
	this->setSignGrade(rhs._signGrade);
	this->setExecGrade(rhs._execGrade);
	return *this;
}

std::string const &	Form::getName (void) const {
	return this->_name;
}

bool	Form::isSigned (void) const {
	return this->_signed;
}

int	Form::getSignGrade (void) const {
	return this->_signGrade;
}

int	Form::getExecGrade (void) const {
	return this->_execGrade;
}

void	Form::setSignGrade (int grade) {
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
	this->_signGrade = grade;
}

void	Form::setExecGrade (int grade) {
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
	this->_execGrade = grade;
}

void	Form::beSigned (Bureaucrat const & b) {
	if (b.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = 1;
}

std::ostream &	operator<< (std::ostream & o, Form const & rhs) {
	o << "Form " << rhs.getName() << ", ";
	if (rhs.isSigned())
		o << "signed, ";
	else
		o << "unsigned, ";
	o << rhs.getSignGrade() << " to sign, " << rhs.getExecGrade() << " to execute";
	return o;
}
