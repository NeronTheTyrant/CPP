/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalConv.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:33:18 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/19 02:43:01 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalConv.hpp"
#include <iostream>

ScalConv::ScalConv (void) {
	std::cout << "ScalConv: Default Constructor" << std::endl;
}

ScalConv::ScalConv(ScalConv const & copy) {
	std::cout << "ScalConv: Copy Constructor" << std::endl;
	*this = copy;
}

ScalConv::ScalConv (std::string & string) {
	toConvert = string;
	this->getFlags();
	this->identify();
}

ScalConv::~ScalConv (void) {
	std::cout << "ScalConv: Destructor" << std::endl;
}

ScalConv &	ScalConv::operator= (ScalConv const & rhs) {
	std::cout << "ScalConv: Assign Operator" << std::endl;
	(void)rhs;
	return *this;
}

void	getFlags (void) {
	hasPoint = (toConvert.find(0, '.') != std::string::npos);
	hasNeg = (toConvert[0] == '-');
	hasF = (toConvert[toConvert.length() - 1] == 'f');

	isNum = isNumeric();
}

bool	isNumeric (void) {

	for (int i = 0; i < toConvert.length(); i++)
	{
		if (!std::isdigit(toConvert[i]))
		{
			if (toConvert[i] == '-' && negFlag)
				negFlag = false;
			else if (s[i] == '.' && pointFlag)
				pointFlag = false;
			else if (s[i] == 'f' && floatFlag)
				floatFlag = false;
			else
				return (false);
		}
	}
	return (true);
}
	else if (!s.compare("+inf") || !s.compare("-inf") || !s.compare("nan"))
		return (DOUBLE);
	else if (!s.compare("+inff") || !s.compare("-inff") || !s.compare("nanf"))
		return (FLOAT);
	else if (s.length() == 1 && (s[0] < '0' || s[0] > '9'))
		return (CHAR);
