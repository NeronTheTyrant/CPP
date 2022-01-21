/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:58:11 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 18:54:31 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	bob = Zombie("Bobby");
	Zombie*	horde = zombieHorde(42, "Horde test");

	bob.announce();
	for (int i = 0; i < 42; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
