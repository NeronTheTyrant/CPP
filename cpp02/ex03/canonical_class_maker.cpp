/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canonical_class_maker.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:09:34 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/27 19:27:38 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define HPP_CONT	"#ifndef DEFAULT_HPP\n" \
"# define DEFAULT_HPP\n\n" \
"Class	default {\n" \
"	public:\n" \
"		default::default (void);\n" \
"		default::default (default const & copy);\n" \
"		default::~default (void);\n\n" \
"		default & operator=(default const & rhs);\n" \
"	private:\n	\n" \
"};\n\n" \
"#endif\n"


#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{

	if (argc != 2)
		return (0);
	std::string classname = argv[1];
	std::string	cppname = classname + ".cpp";
	std::string	hppname = classname + ".hpp";
	std::ofstream	cpp(cppname.c_str());
	std::ofstream	hpp(hppname.c_str());
	hpp << HPP_CONT;
	return (0);
}
