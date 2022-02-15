/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:15:39 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/15 19:39:53 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

#define SHRUBBERY "" \
"                                              .\n" \
"                                   .         ;\n" \
"      .              .              ;%     ;;\n" \
"        ,           ,                :;%  %;\n" \
"         :         ;                   :;%;'     .,\n" \
",.        %;     %;            ;        %;'    ,;\n" \
"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n" \
"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n" \
"    ;%;      %;        ;%;        % ;%;  ,%;'\n" \
"     `%;.     ;%;     %;'         `;%%;.%;'\n" \
"      `:;%.    ;%%. %@;        %; ;@%;%'\n" \
"         `:%;.  :;bd%;          %;@%;'\n" \
"           `@%:.  :;%.         ;@@%;'\n" \
"             `@%.  `;@%.      ;@@%;\n" \
"               `@%%. `@%%    ;@@%;\n" \
"                 ;@%. :@%%  %@@%;\n" \
"                   %@bd%%%bd%%:;\n" \
"                     #@%%%%%:;;\n" \
"                     %@@%%%::;\n" \
"                     %@@@%(o);  . '\n" \
"                     %@@@o%;:(.,'\n" \
"                 `.. %@@@o%::;\n" \
"                    `)@@@o%::;\n" \
"                     %@@(o)::;\n" \
"                    .%@@@@%::;\n" \
"                    ;%@@@@%::;.\n" \
"                   ;%@@@@%%:;;;.\n" \
"               ...;%@@@@@%%:;;;;,..\n" \


ShrubberyCreationForm::ShrubberyCreationForm (void)
	: Form("default_name", 145, 137){
	std::cout << "ShrubberyCreationForm: Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) {
	std::cout << "ShrubberyCreationForm: Copy Constructor" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm (std::string const & target)
	: Form("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm: Name Constructor" << std::endl;
	this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm (void) {
	std::cout << "ShrubberyCreationForm: Destructor" << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator= (ShrubberyCreationForm const & rhs) {
	std::cout << "ShrubberyCreationForm: Assign Operator" << std::endl;
	Form::operator=(rhs);
	return *this;
}

void	ShrubberyCreationForm::execute (Bureaucrat const & executor) const {
	this->checkExecute(executor);
	std::ofstream	ofs(std::string(this->getTarget() + "_shrubbery").c_str());
	if (!ofs.good())
		throw std::runtime_error("Error while creating new file");
	ofs << SHRUBBERY;
	ofs.close();
}
