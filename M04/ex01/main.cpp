/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 03:01:01 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 09:22:54 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{

	std::cout << "**** Animals *****" << std::endl;
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
	delete animal;

	std::cout << "**** Wrong Animals *****" << std::endl;

	const WrongAnimal *wrong_animal = new WrongAnimal();
	const WrongAnimal *wrong_cat = new WrongCat();

	std::cout << wrong_animal->getType() << std::endl;
	std::cout << wrong_cat->getType() << std::endl;

	wrong_animal->makeSound();
	wrong_cat->makeSound();

	delete wrong_animal;
	delete wrong_cat;

	return 0;
}
