/* ************************************************************************** */
/*                                                                             */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:08:33 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:12:11 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain {
	public:
		std::string	ideas[100];
		Brain (void);
		Brain (Brain const & copy);
		~Brain (void);

		Brain & operator=(Brain const & rhs);
		std::string const &	getFirstThought (void) const;
	private:
};

#endif
