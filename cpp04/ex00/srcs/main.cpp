/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:51:32 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 15:52:29 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal * animal = new Animal;
	std::cout << "This is an animal. It makes no noise: " << std::endl;
	animal->makeSound();
	std::cout << "Did you hear anything?" << std::endl;
	delete animal;
	animal = new Cat;
	std::cout << "The animal is evolving! Animal evolved into Cat!" << std::endl;
	animal->makeSound();
	std::cout << "But wait, what's that?" << std::endl;
	Animal * animal2 = new Dog;
	std::cout << "It's an Animal! No, it's a Dog!!!" << std::endl;
	animal2->makeSound();
	delete animal;
	std::cout << "Looks like the cat is dead :(" << std::endl;
	animal = animal2;
	animal->makeSound();
	delete animal;

	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete meta;
	delete i;
	return 0;
}
