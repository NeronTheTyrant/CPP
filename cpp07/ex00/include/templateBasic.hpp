/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templateBasic.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:49:02 by mlebard           #+#    #+#             */
/*   Updated: 2022/03/02 17:49:04 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	swap ( T & a, T & b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T const &	min (T const & x, T const & y) {
	if (x < y)
		return x;
	else
		return y;
}

template <typename T>
T const &	max (T const & x, T const & y) {
	if (x > y)
		return x;
	else
		return y;
}
