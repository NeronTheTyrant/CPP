/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:51:39 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 19:41:34 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVENTORY_HPP
# define INVENTORY_HPP

# include "AMateria.hpp"

# define INV_ERR		"Inventory: fail: "

# define NOITEMS	"no items in inventory"
# define BADIDX		"index is in invalid range"
# define EMPTY		"no item at index"

# define ERRMSG(main, sub)	std::cout << main << sub << std::endl;

class	Inventory {
	public:
		Inventory (void);
		Inventory (Inventory const & copy);
		~Inventory (void);

		Inventory & operator=(Inventory const & rhs);

		int	add (AMateria * m);
		int	remove (int idx);
		AMateria *	getMateria (int idx) const;
		AMateria *	getMateria (std::string const & type) const;
	private:
		AMateria *	_stock[4];
		int	_itemNb;

		void	_clearStock (void);
		void	_copyStock (Inventory const & copy);
		int	_checkValidItem (int idx) const;
};

#endif
