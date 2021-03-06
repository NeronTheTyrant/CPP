/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:34:55 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:34:56 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {

	public:
		Fixed(void);
		Fixed(Fixed & copy);
		~Fixed(void);

		Fixed & operator=(const Fixed & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_raw;
		static const int	_fractBits;
};

#endif
