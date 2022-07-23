/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 03:01:01 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 16:16:59 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#define MAX_ANIMALS 10

int main( void )
{
	Animal *animals[MAX_ANIMALS];

	//construct
	for (unsigned int i = 0; i < MAX_ANIMALS; i++)
	{
		if (i < MAX_ANIMALS / 2 )
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();

	//dog
	// dog->getIdea(1);
	std::cout << "I'm thinking to: " << dog->getIdea(3) << std::endl;
	dog->setIdea(1, "I want to go out");
	std::cout << "I'm thinking to: " << dog->getIdea(1) << std::endl;

	delete dog;
	delete cat;
	
	//delete
	for (unsigned int i = 0; i < MAX_ANIMALS; i++)
		delete animals[i];
	
	return 0;
}
