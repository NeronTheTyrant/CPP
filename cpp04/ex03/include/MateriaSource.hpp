/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:10:00 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 17:46:19 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Inventory.hpp"

class	MateriaSource: public IMateriaSource {
	public:
		MateriaSource (void);
		MateriaSource (MateriaSource const & copy);
		~MateriaSource (void);

		MateriaSource & operator=(MateriaSource const & rhs);

		void	learnMateria (AMateria * m);
		AMateria *	createMateria (std::string const & type);
	private:
		Inventory	_inv;
};

#endif
