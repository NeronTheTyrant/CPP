/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:30:18 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 21:35:28 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {

	public:

	Weapon(std::string type);
	~Weapon(void);

	std::string	getType(void);
	void		setType(std::string type);

	private:

	std::string	_type;
};

#endif
