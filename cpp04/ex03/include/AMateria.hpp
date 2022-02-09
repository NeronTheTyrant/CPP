/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:48:09 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 19:10:26 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class	AMateria {
	public:
		AMateria (void);
		AMateria (AMateria const & copy);
		~AMateria (void);

		AMateria & operator=(AMateria const & rhs);

		std::string const &	getType (void) const;

		virtual	AMateria * clone (void) const = 0;
		virtual void	use (ICharacter & target);

	protected:
	std::string	type;
};

#endif
