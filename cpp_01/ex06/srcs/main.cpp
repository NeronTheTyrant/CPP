/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:34:25 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/21 03:32:36 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return (0);
	}
	switch (karen.getComplaintLevel(argv[1]))
	{
		case WRONG : karen.complain("WRONG"); break;
		case DEBUG : karen.complain("DEBUG");
		case INFO : karen.complain("INFO");
		case WARNING : karen.complain("WARNING");
		case ERROR : karen.complain("ERROR"); break;
	}
	return (0);
}
