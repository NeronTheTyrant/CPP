/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:36:07 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 17:36:13 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap (void);
		ScavTrap (ScavTrap const & copy);
		ScavTrap (std::string const & name);
		~ScavTrap (void);

		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack (const std::string & target);
		void	guardGate (void);

	protected:
		void	initHP(void);
		void	initEP(void);
		void	initAD(void);

	private:
};

#endif
