/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:35:57 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:36:00 by mlebard          ###   ########.fr       */
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

		Fixed &	operator=(Fixed const & rhs);
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;

		Fixed &	operator++(void);
		Fixed	operator++(int);
		Fixed &	operator--(void);
		Fixed	operator--(int);

		static Fixed &			min(Fixed & a, Fixed & b);
		static Fixed const & 	min(Fixed const & a, Fixed const & b);
		static Fixed &			max(Fixed & a, Fixed & b);
		static Fixed const & 	max(Fixed const & a, Fixed const & b);

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
