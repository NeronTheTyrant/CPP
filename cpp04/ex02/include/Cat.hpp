/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:51:16 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 16:52:28 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal {
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
