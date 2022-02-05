/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:51:32 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/05 02:20:13 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
/*
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	i->makeSound();
	j->makeSound();
	Animal * a = new Dog();
	Animal b = Cat();
	Animal c = Cat();
	delete j;//should not create a leak
	delete i;
		return 0;
		*/
	Dog basic;
	std::cout << "Premier Dog lol" << std::endl;
	{
		Dog tmp;
		tmp = basic;
		std::cout << "Deuxieme Doge xd" << std::endl;
	}
	std::cout << basic.getBrain()->getFirstThought() << std::endl;
}
