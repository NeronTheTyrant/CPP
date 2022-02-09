/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:51:32 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/09 17:18:19 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//AAnimal *	meta = new AAnimal(); // Will not compile
	//Dog *	dogtest = new (AAnimal(); // Will not compile
	//AAnimal stackaanimal; // Will not compile
	//AAnimal * heapAAnimal; // Will compile
	AAnimal * animal1 = new Dog();// Will compile
	animal1->makeSound();
	std::cout << animal1->getBrain()->getFirstThought() << std::endl;
	AAnimal * animal2 = new Cat();
	animal2->makeSound();
	std::cout << animal2->getBrain()->getFirstThought() << std::endl;
	delete animal1;
	delete animal2;
}
