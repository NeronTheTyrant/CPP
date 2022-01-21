/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:41:59 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 22:28:31 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class	HumanB {

	public:

	HumanB(std::string name);
	~HumanB(void);

	void		attack(void);

	std::string	getName(void);
	Weapon *	getWeapon(void);

	void		setName(std::string name);
	void		setWeapon(Weapon &weapon);
	private:
	std::string	_name;
	Weapon *	_weapon;
};

#endif
