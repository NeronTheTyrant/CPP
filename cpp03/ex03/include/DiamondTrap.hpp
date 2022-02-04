/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:14:09 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:17:52 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap (void);
		DiamondTrap (DiamondTrap const & copy);
		DiamondTrap (std::string const & name);
		~DiamondTrap (void);

		DiamondTrap & operator=(DiamondTrap const & rhs);
		void	whoAmI (void);
	private:
		std::string	__name;
};

#endif
