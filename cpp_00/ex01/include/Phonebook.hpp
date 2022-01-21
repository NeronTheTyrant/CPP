/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:24:55 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/21 04:04:16 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook {

	public:
		typedef void (Contact::*contactSetters)(std::string);
		typedef std::string (Contact::*contactGetters)(void) const;

		Phonebook(void);
		~Phonebook(void);

		void	add(void);
		void	search(void) const;

	private:
		Contact	_list[8];
		int		_contactnum;

		static std::string	_infoStrings[5];
		static contactSetters	_set[5];
		static contactGetters	_get[5];

		void	_printSearchHeader(void) const;
		int		_checkSearchInput(std::string input) const;
};

#endif
