/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:47:41 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 08:12:35 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Wrong Animal")
{
	std::cout << " [WrongAnimal] Default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "[WrongAnimal] Default constructor with parameter called" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << " [WrongAnimal] Destructor was call" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const &wrogAnimalCoppy )
{
	std::cout << "[WrongAnimal] Coppy constructor called" << std::endl;
	*this = wrogAnimalCoppy;
	return;
}

WrongAnimal			&WrongAnimal::operator=( WrongAnimal const &wrongAnimalCoppy )
{
	std::cout << " [WrongAnimal] Coppy assigment operator called" << std::endl;
	if ( this != &wrongAnimalCoppy )
		this->_type = wrongAnimalCoppy._type;

	return *this;
}

void			WrongAnimal::makeSound( void ) const
{
	std::cout << "[WrongAnimal] Some wrong animal noises!" << std::endl;
	return;
}

std::string		WrongAnimal::getType( void ) const
{
	return this->_type;
}
