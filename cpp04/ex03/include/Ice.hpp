/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:21:41 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 19:41:49 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria {
	public:
		Ice (void);
		Ice (Ice const & copy);
		~Ice (void);

		Ice & operator=(Ice const & rhs);
		Ice *	clone (void) const;
		void	use (ICharacter & target);
};

#endif
