/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:31:06 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/28 19:22:57 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point {
	public:
		Point (void);
		Point (Point const & copy);
		Point (float const x, float const y);
		~Point (void);

		Point & operator=(Point const & rhs);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
	private:
		Fixed const	_x;
		Fixed const	_y;
};

std::ostream &	operator<<(std::ostream & o, Point const & rhs);

#endif
