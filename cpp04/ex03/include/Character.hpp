/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:50:08 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 18:58:17 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Inventory.hpp"

class	Character : public ICharacter {
	public:
		Character (void);
		Character (Character const & copy);
		Character (std::string const & name);
		~Character (void);

		Character & operator=(Character const & rhs);

		std::string const &	getName (void) const;

		void	equip (AMateria * m);
		void	unequip (int idx);
		void	use (int idx, ICharacter & target);
	private:
		std::string	_name;
		Inventory	_inv;
};

#endif
