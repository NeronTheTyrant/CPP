/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:43:22 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 13:39:13 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource {
	public:
		virtual ~IMateriaSource (void) {};

		virtual void learnMateria (AMateria * m) = 0;
		virtual AMateria * createMateria(std::string const & type) = 0;
};

#endif
