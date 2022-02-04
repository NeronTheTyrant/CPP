/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:35:19 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/03 20:35:22 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a(-42);
	Fixed b(752.54224f);
	Fixed c(27.8524f);

	std::cout << "Raw: " << a.getRawBits() << std::endl << "Real: " << a << std::endl;
	std::cout << "Raw: " << b.getRawBits() << std::endl << "Real: " << b << std::endl;
	std::cout << "Raw: " << c.getRawBits() << std::endl << "Real: " << c << std::endl;
	return 0;
}
