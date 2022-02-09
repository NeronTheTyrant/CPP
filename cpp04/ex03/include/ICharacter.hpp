/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:43:10 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 18:46:51 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>

class	ICharacter {
	public:
		virtual ~ICharacter (void) {};

		virtual void	std::string const &	getName (void) const = 0;
		virtual void	equip (AMateria * m) = 0;
		virtual void	unequip (int idx) = 0;
		virtual void	use (int idx, ICharacter &target) = 0;
};

#endif