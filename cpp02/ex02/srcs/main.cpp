/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:35:38 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:35:40 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b ( Fixed (5.05f) * Fixed(2));
	Fixed const c ( Fixed (34.56f) / Fixed (1.234f));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
