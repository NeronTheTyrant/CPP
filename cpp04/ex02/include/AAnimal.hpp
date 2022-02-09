/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:50:56 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 16:35:09 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include "Brain.hpp"

class	AAnimal {
	public:
		AAnimal (void);
		AAnimal (AAnimal const & copy);
		virtual ~AAnimal (void);

		AAnimal & operator=(AAnimal const & rhs);
		virtual void makeSound(void) const = 0;
		virtual Brain * getBrain (void) const = 0;
		std::string const &	getType (void) const;
	protected:
		AAnimal (std::string const & type);
		std::string	type;
	private:
};

#endif
