/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:52:46 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/21 03:01:32 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen (void) {}

Karen::~Karen (void) {}

void	Karen::complain(std::string level)
{
	int	i;
	complainer	complaint;
	for (i = 0; i < 4; i++)
	{
		if (level.compare(Karen::_complaintLevel[i]) == 0)
			break ;
	}
	if (i == 4)
	{
		std::cout << "Unkown complaint" << std::endl;
		return ;
	}
	complaint = Karen::_complaint[i];
	(this->*complaint)();
}

void	Karen::debug (void) {
	std::cout << "This is a \"Karen\" joke. It's not very funny." << std::endl;
}

void	Karen::info (void) {
	std::cout << "\"Karen\" jokes peaked around 2015, and have now become a staple joke for people who unironically use 9Gag in their thirties. This is also known as \"Milennial Boomer Humour\"." << std::endl; 
}

void	Karen::warning (void) {
	std::cout << "I'm warning you, if you make another shitty \"Karen\" joke I'll bash your skull in. Get better material, stop coming up with stuff you could see on your mom's facebook page." << std::endl;
}

void	Karen::error (void) {
	std::cout << "That's it I'm done I'm leaving screw this." << std::endl;
}

Karen::complainer	Karen::_complaint[4] = {
	&Karen::debug,
	&Karen::info,
	&Karen::warning,
	&Karen::error
};

std::string	Karen::_complaintLevel[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};
