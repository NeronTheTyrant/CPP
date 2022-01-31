/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:50:47 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/28 20:07:17 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

#include <iostream>

Fixed	vectSign(Point const p1, Point const p2, Point const p3) {
	return Fixed((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}

bool	bsp (Point const a, Point const b, Point const c, Point const point) {
	Fixed	d1, d2, d3;
	bool	has_neg, has_pos;

	if (a == point || b == point || c == point)
		return (false);
	d1 = vectSign(point, a, b);
	d2 = vectSign(point, b, c);
	d3 = vectSign(point, c, a);
	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (false);
	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return !(has_neg && has_pos);
}
