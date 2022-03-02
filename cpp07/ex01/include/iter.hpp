/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:49:17 by mlebard           #+#    #+#             */
/*   Updated: 2022/03/02 17:49:18 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter (T * array, size_t size, void (*func)(T &)) {
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

template <typename T>
void	print (T const & t) {
	std::cout << t << std::endl;
}

template <typename T>
void	plusOne (T & t) {
	t++;
}
