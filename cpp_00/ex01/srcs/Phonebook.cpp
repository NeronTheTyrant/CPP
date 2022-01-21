/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:14:22 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/21 04:41:45 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "Phonebook.hpp"

/* Constructor & Destructor */

Phonebook::Phonebook(void)
{
	this->_contactnum = 0;
}

Phonebook::~Phonebook(void) {}

void	Phonebook::add(void)
{
	Contact			*contact;
	contactSetters	set;
	std::string		temp;

	if (this->_contactnum >= 8)
	{
		std::cout << "*Phonebook is full! (max 8 contacts)" << std::endl;
		return;
	}
	contact = &this->_list[_contactnum];
	std::cout << "*Enter new contact information:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "*" << Phonebook::_infoStrings[i] << std::endl;
		std::cout << ">";
		std::getline(std::cin, temp);
		if (std::cin.eof())
			return ;
		set = Phonebook::_set[i];
		(contact->*set)(temp);
	}
	this->_contactnum += 1;
	std::cout << "*Contact added! Currently " << this->_contactnum << " contact(s)" << std::endl;
}

void	Phonebook::search(void) const
{
	std::string		input;
	int				index;
	const Contact	*contact;
	contactGetters	get;

	if (this->_contactnum == 0)
	{
		std::cout << "*No contacts to search (yet)!" << std::endl;
		return ;
	}
	this->_printSearchHeader();
	std::cout << "*Enter contact index [1-8]:" << std::endl;
	std::cout << ">";
	std::getline(std::cin, input);
	if (this->_checkSearchInput(input) == 0)
	{
		std::cout << "*Undefined index: " << input << std::endl;
		return ;
	}
	index = input[0] - 48 - 1;
	if (index >= this->_contactnum)
	{
		std::cout << "*Contact [" << index + 1 << "] does not exist (yet)" << std::endl;
		return ;
	}
	contact = &this->_list[index];
	for (int i = 0; i < 5; i++)
	{
		get = Phonebook::_get[i];
		std::cout << "*" << Phonebook::_infoStrings[i] << " " << (contact->*get)() << std::endl;
	}
	return ;
}

void	Phonebook::_printSearchHeader(void) const
{
	const Contact	*contact;
	std::string		str;
	contactGetters	get;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::setiosflags(std::ios::right);
	for (int i = 0; i < this->_contactnum; i++)
	{
		contact = &this->_list[i];
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|";
		for (int j = 0; j < 3; j++)
		{
			get = this->_get[j];
			std::string	str = (contact->*get)();
			if (str.length() > 10)
				std::cout << str.substr(0, 10);
			else
				std::cout << std::setw(10) << str;
			std::cout << "|";
		}
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
}

int		Phonebook::_checkSearchInput(std::string input) const
{
	if (input[0] < '1' || input[0] > '8')
		return (0);
	if (input.size() > 1)
		return (0);
	return (1);
}

std::string	Phonebook::_infoStrings[5] = {
	"First name:",
	"Last name:",
	"Nickname:",
	"Phone number:",
	"Darkest secret:"
};

Phonebook::contactSetters	Phonebook::_set[5] = {
	&Contact::setFirstName,
	&Contact::setLastName,
	&Contact::setNickname,
	&Contact::setPhoneNumber,
	&Contact::setDarkestSecret
};

Phonebook::contactGetters	Phonebook::_get[5] = {
	&Contact::getFirstName,
	&Contact::getLastName,
	&Contact::getNickname,
	&Contact::getPhoneNumber,
	&Contact::getDarkestSecret
};
