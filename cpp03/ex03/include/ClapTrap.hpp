/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:01:53 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/04 23:01:55 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class	ClapTrap {
	public:
		ClapTrap (void);
		ClapTrap (ClapTrap const & copy);
		ClapTrap (std::string const & name);
		~ClapTrap (void);

		ClapTrap & operator= (ClapTrap const & rhs);

		void	attack (const std::string & target);
		void	takeDamage (unsigned int amount);
		void	beRepaired (unsigned int amount);
	protected:
		std::string	__name;
		unsigned int	__hp;
		unsigned int	__ep;
		unsigned int	__ad;

		void	initHP(void);
		void	initEP(void);
		void	initAD(void);
		void	__noAct(void);

	private:
};

#endif
