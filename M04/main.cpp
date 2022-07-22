/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 03:01:01 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/22 13:36:43 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{

	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	return 0;
}
