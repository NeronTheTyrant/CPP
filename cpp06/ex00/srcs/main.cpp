/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:34:06 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/19 01:14:28 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cfloat>
#include <climits>
#include <sstream>

typedef enum type {CHAR, INT, FLOAT, DOUBLE, BAD} type;

bool	isFloat(std::string s) {
    std::istringstream iss(s);
    float f;
    iss >> std::noskipws >> f; // noskipws considers leading whitespace invalid
    // Check the entire string was consumed and if either failbit or badbit is set
    return iss.eof() && !iss.fail(); 
}

bool	isNumeric (std::string s, bool pointFlag, bool negFlag, bool floatFlag) {
	for (int i = 0; i < s.length(); i++)
	{
		if (!std::isdigit(s[i]))
		{
			if (s[i] == '-' && negFlag)
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

type	identify(std::string s) {
	bool	pointFlag = (s.find(0, '.') != std::string::npos);
	bool	negFlag = (s[0] == '-');
	bool	floatFlag = (s[s.length() - 1] == 'f');
	bool isNumeric = isNumeric(s, pointFlag, negFlag, floatFlag);

	if (isNumeric)
	{
		if (pointFlag)
		{
			if (floatFlag)
				return (FLOAT);
			else
				return (DOUBLE);
		}
		else
			return (INT);
	}
	else if (!s.compare("+inf") || !s.compare("-inf") || !s.compare("nan"))
		return (DOUBLE);
	else if (!s.compare("+inff") || !s.compare("-inff") || !s.compare("nanf"))
		return (FLOAT);
	else if (s.length() == 1 && (s[0] < '0' || s[0] > '9'))
		return (CHAR);
	
}

int	main (int argc, char **argv)
{
	std::string	toConvert;

	if (argc != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return (0);
	}
	toConvert = argv[1];
	type	t = identify(toConvert);
	if (t == FLOAT)
		std::cout << "it's a float!" << std::endl;
	return (0);
}
