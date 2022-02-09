/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:49:08 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 15:53:49 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class	WrongAnimal {
	public:
		WrongAnimal (void);
		WrongAnimal (WrongAnimal const & copy);
		~WrongAnimal (void);

		WrongAnimal & operator=(WrongAnimal const & rhs);
		void	makeSound(void) const;
		std::string const &	getType (void) const;
	protected:
		WrongAnimal (std::string const & type);
		std::string	type;
	private:
};

#endif
