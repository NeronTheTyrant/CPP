/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:45:40 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 19:42:01 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure: public AMateria {
	public:
		Cure (void);
		Cure (Cure const & copy);
		~Cure (void);

		Cure & operator=(Cure const & rhs);
		Cure *	clone (void) const;
		void	use (ICharacter & target);
};

#endif
