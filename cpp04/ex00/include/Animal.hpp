/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:50:56 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/04 22:43:48 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal {
	public:
		Animal (void);
		Animal (Animal const & copy);
		virtual ~Animal (void);

		Animal & operator=(Animal const & rhs);
		virtual void makeSound(void) const;
		std::string const &	getType (void) const;
	protected:
		Animal (std::string const & type);
		std::string	type;
	private:
};

#endif
