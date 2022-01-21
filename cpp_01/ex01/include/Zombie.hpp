/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:38:40 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 18:55:59 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie {

	public:
		Zombie (void);
		Zombie(std::string name);
		~Zombie(void);

		void	setName(std::string name);
		void	announce(void);
	private:
		std::string	_name;
};

#endif
