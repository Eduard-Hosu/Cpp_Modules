/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 03:01:01 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/22 12:44:08 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

int main( void )
{

	const Animal *animal = new Animal();
	const Animal *dog = new Dog();

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;

	dog->makeSound();

	delete dog;

	return 0;
}
