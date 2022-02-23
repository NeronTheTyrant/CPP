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

ScalConv::ScalConv (void)
	: _toConvert("fuck you"), _type(BAD), _val(0), _impossible(false) {
//	std::cout << "ScalConv: Default Constructor" << std::endl;
}

ScalConv::ScalConv(ScalConv const & copy) {
//	std::cout << "ScalConv: Copy Constructor" << std::endl;
	*this = copy;
}

ScalConv::ScalConv (std::string const & string)
	: _toConvert(string), _type(BAD), _val(0), _impossible(false) {
	this->identify();
	std::cout << string << " is of type ";
	if (_type == CHAR)
		std::cout << "char" << std::endl;
	if (_type == INT)
		std::cout << "int" << std::endl;
	if (_type == FLOAT)
		std::cout << "float" << std::endl;
	if (_type == DOUBLE)
		std::cout << "double" << std::endl;
	if (_type == BAD)
		std::cout << "FOOKIN HORSESHIT" << std::endl;
	this->setVal();
}

ScalConv::~ScalConv (void) {
//	std::cout << "ScalConv: Destructor" << std::endl;
}

ScalConv &	ScalConv::operator= (ScalConv const & rhs) {
//	std::cout << "ScalConv: Assign Operator" << std::endl;
	_toConvert = rhs._toConvert;
	_type = rhs._type;
	_val = rhs._val;
	_impossible = rhs._impossible;
	return *this;
}

void	ScalConv::setVal (void) {
	if (_type == BAD)
	{
		this->_impossible = true;
		return ;
	}
	if (_type == FLOAT)
		this->_toConvert = _toConvert.substr(0, _toConvert.length() - 1);
	if (_type == CHAR)
	{
		this->_val = static_cast<double>(_toConvert[0]);
		return ;
	}
	try {
	this->_val = std::strtod(_toConvert.c_str(), NULL);
	}
	catch (std::exception & e) {
		this->_impossible = true;
	}
}

double	ScalConv::getVal (void) {
	return this->_val;
}

void	ScalConv::setConvString (std::string const & str) {
	this->_toConvert = str;
}

std::string const & ScalConv::getConvString (void) {
	return this->_toConvert;
}

void	ScalConv::identify (void) {
	bool	pointFlag = (_toConvert.find('.') != std::string::npos);
	bool	floatFlag = (_toConvert[_toConvert.length() - 1] == 'f');
	bool	isNum = this->_isNumeric();
	bool	isInfFloat = (!_toConvert.compare("inff") || !_toConvert.compare("-inff") || !_toConvert.compare("nanf"));
	bool	isInfDouble = (!_toConvert.compare("inf") || !_toConvert.compare("-inf") || !_toConvert.compare("nan"));
	bool	isSingleChar = (_toConvert.length() == 1 && (_toConvert[0] < '0' || _toConvert[0] > '9'));

	if (isInfFloat || (isNum && floatFlag))
		this->_type = FLOAT;
	else if (isInfDouble || (isNum && pointFlag && !floatFlag))
		this->_type = DOUBLE;
	else if (isNum)
		this->_type = INT;
	else if (isSingleChar)
		this->_type = CHAR;
	else
		this->_type = BAD;
}

char	ScalConv::toChar (void) {
	if (_impossible || isnan(_val) || isinf(_val) || _val < -128 || _val > 127)
		throw ImpossibleConversionException();
	if (!isprint(_val))
		throw NonDisplayableException();
	return static_cast<char>(this->_val);
}

int	ScalConv::toInt (void) {
	if (_impossible || isnan(_val) || isinf(_val) || _val < INT_MIN || _val > INT_MAX)
		throw ImpossibleConversionException();
	return static_cast<int>(this->_val);
}

float	ScalConv::toFloat (void) {
	if (_impossible)
	{
		std::cout << "hello" << std::endl;
		throw ImpossibleConversionException();
	}
	if (isinf(_val) || isnan(_val))
		return static_cast<float>(this->_val);
	if (_val < -std::numeric_limits<float>::max() || _val > std::numeric_limits<float>::max())
		throw ImpossibleConversionException();
	return static_cast<float>(this->_val);
}

double	ScalConv::toDouble (void) {
	if (_impossible)
		throw ImpossibleConversionException();
	return this->_val;
}

bool	ScalConv::_isNumeric (void) {
	bool	pointFlag = (_toConvert.find('.') != std::string::npos);
	bool	negFlag = (_toConvert[0] == '-');
	bool	floatFlag = (_toConvert[_toConvert.length() - 1] == 'f');
	for (unsigned int i = 0; i < _toConvert.length(); i++)
	{
		if (!std::isdigit(_toConvert[i]))
		{
			if (_toConvert[i] == '-' && negFlag)
				negFlag = false;
			else if (_toConvert[i] == '.' && pointFlag)
				pointFlag = false;
			else if (_toConvert[i] == 'f' && floatFlag)
				floatFlag = false;
			else
				return (false);
		}
	}
	return (true);
}
