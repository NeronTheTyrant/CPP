/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:36:16 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 22:20:39 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class	HumanA {

	public:

	HumanA(std::string name, Weapon & weapon);
	~HumanA(void);

	void		attack(void);

	std::string	getName(void);
	Weapon &	getWeapon(void);

	void		setName(std::string name);
	void		setWeapon(Weapon & weapon);
	private:
	std::string	_name;
	Weapon &	_weapon;
};

#endif
