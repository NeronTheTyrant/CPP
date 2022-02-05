/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:35:38 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:17:49 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	public:
		Dog (void);
		Dog (Dog const & copy);
		~Dog (void);

		Dog & operator=(Dog const & rhs);
		void makeSound (void) const;
		Brain *	getBrain (void) const;
	private:
		Brain * _brain;
};

#endif
