/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:17:48 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 21:26:56 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string *	ptr = &str;
	std::string &	ref = str;

	std::cout << "Memory:" << std::endl
		<< "str: " << &str << std::endl
		<< "ptr: " << ptr << std::endl
		<< "ref: " << &ref << std::endl;
	std::cout << "Value:" << std::endl
		<< "str: " << str << std::endl
		<< "ptr: " << *ptr << std::endl
		<< "ref: " << ref << std::endl;
	return (0);
}
