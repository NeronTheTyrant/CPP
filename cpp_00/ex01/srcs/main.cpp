/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:22:49 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/21 04:42:32 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int	main(void)
{
	Phonebook	pbook;
	std::string	input;

	while (1)
	{
		std::cout << "*Enter a command [ADD, SEARCH, EXIT]: " << std::endl;
		std::cout << ">";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (0);
		if (input.compare("ADD") == 0)
			pbook.add();
		else if (input.compare("SEARCH") == 0)
			pbook.search();
		else if (input.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Unknown command: " << input << std::endl;
		if (std::cin.eof())
			return (0);
	}
	return (0);
}
