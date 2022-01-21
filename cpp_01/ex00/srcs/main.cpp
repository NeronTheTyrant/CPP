/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:58:11 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/20 17:04:23 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	bob = Zombie("Bobby");
	Zombie*	jim = newZombie("Jimmothy");

	bob.announce();
	jim->announce();
	randomChump("Bobbothy");
	delete jim;
	randomChump("Jibby");
	return 0;
}
