/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:51:16 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:17:40 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	public:
		Cat (void);
		Cat (Cat const & copy);
		~Cat (void);

		Cat & operator=(Cat const & rhs);
		void	makeSound(void) const;
		Brain *	getBrain (void) const;
	private:
		Brain * _brain;
};

#endif
