/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:35:03 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:35:07 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class	Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const & copy);
		Fixed(int n);
		Fixed(float f);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static int	getFractBits(void);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_raw;
		static int const	_fractBits = 8;
};

std::ostream &	operator<< (std::ostream & o, Fixed const & rhs);

#endif
