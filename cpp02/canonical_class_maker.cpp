/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canonical_class_maker.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:09:34 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/28 19:21:41 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define HPP_CONT	"" \
"#ifndef DEFAULT_HPP\n" \
"# define DEFAULT_HPP\n" \
"\n" \
"class	default {\n" \
"	public:\n" \
"		default (void);\n" \
"		default (default const & copy);\n" \
"		~default (void);\n" \
"\n" \
"		default & operator=(default const & rhs);\n" \
"	private:\n"\
"		\n" \
"};\n" \
"\n" \
"#endif"

#define CPP_CONT	""\
"#include \"default.hpp\"\n" \
"#include <iostream>\n" \
"\n" \
"default::default (void) {\n" \
"	std::cout << \"default: Default Constructor\" << std::endl;\n" \
"}\n" \
"\n" \
"default::default(default const & copy) {\n" \
"	std::cout << \"default: Copy Constructor\" << std::endl;\n" \
"	*this = copy;\n" \
"}\n" \
"\n" \
"default::~default (void) {\n" \
"	std::cout << \"default: Destructor\" << std::endl;\n" \
"}\n" \
"\n" \
"default &	default::operator= (default const & rhs) {\n" \
"	std::cout << \"default: Assign Operator\" << std::endl;\n" \
"}"

#include <iostream>
#include <fstream>

std::string	string_toupper(std::string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{

	if (argc != 2)
		return (0);
	std::string classname = argv[1];
	std::string	classname_upper = string_toupper(argv[1]);
	std::string	cppname = classname + ".cpp";
	std::string	hppname = classname + ".hpp";
	std::ofstream	cpp(cppname.c_str());
	std::ofstream	hpp(hppname.c_str());
	std::string	cpp_cont = CPP_CONT;
	std::string	hpp_cont = HPP_CONT;
	while (true)
	{
		int n = cpp_cont.find("default");
		if (n != std::string::npos)
			cpp_cont.replace(n, 7, classname);
		else
			break;
	}
	while (true)
	{
		int n = hpp_cont.find("default");
		if (n != std::string::npos)
			hpp_cont.replace(n, 7, classname);
		else
			break;
	}
	while (true)
	{
		int n = hpp_cont.find ("DEFAULT");
		if (n != std::string::npos)
			hpp_cont.replace(n, 7, classname_upper);
		else
			break;
	}
	cpp << cpp_cont;
	hpp << hpp_cont;
	return (0);
}
