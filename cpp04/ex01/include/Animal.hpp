/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:50:56 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:16:38 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class	Animal {
	public:
		Animal (void);
		Animal (Animal const & copy);
		virtual ~Animal (void);

		Animal & operator=(Animal const & rhs);
		virtual void makeSound(void) const;
		virtual Brain * getBrain (void) const;
		std::string const &	getType (void) const;
	protected:
		Animal (std::string const & type);
		std::string	type;
	private:
};

#endif
