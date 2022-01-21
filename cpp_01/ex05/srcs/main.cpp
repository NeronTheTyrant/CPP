/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:34:25 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/21 02:41:37 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(void)
{
	Karen	karen;

	std::cout << "Welcome to the cringe exercise." << std::endl;
	std::cout << "DEBUG test: ";
	karen.complain("DEBUG");
	std::cout << "INFO test: ";
	karen.complain("INFO");
	std::cout << "WARNING test: ";
	karen.complain("WARNING");
	std::cout << "ERROR test: ";
	karen.complain("ERROR");
	std::cout << "WRONG test: ";
	karen.complain("WRONG");
	return (0);
}
