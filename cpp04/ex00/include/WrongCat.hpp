/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:47:18 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 15:54:25 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public:
		WrongCat (void);
		WrongCat (WrongCat const & copy);
		~WrongCat (void);

		WrongCat & operator=(WrongCat const & rhs);
		void	makeSound(void) const;
	private:
		
};

#endif
