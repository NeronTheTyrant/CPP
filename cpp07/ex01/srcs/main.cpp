/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:49:50 by mlebard           #+#    #+#             */
/*   Updated: 2022/03/02 17:51:12 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main( void ) {

	float f[] = {42.1f, 58.6454f, 3.14f, 48712545.2f, 11545.0f, 1.000000000005f};
	int	i[] = {1, 5, 78, 95, 34, 75, 12, 65, 84, 245421, 455445544};
	std::string str[] = {"bonjour", "is this thing on", "je suis tout seul?", "lol xd ptdr"};
	::iter<const float>(f, 6, print);
	::iter<const int>(i, 11, print);
	::iter<const std::string>(str, 4, print);
	::iter<float>(f, 6, plusOne);
	::iter<int>(i, 11, plusOne);
	::iter<const float>(f, 6, print);
	::iter<const int>(i, 11, print);
	return 0;
}
