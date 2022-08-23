/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:47:41 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
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

WrongAnimal::WrongAnimal( WrongAnimal const &wrogAnimalCopy )
{
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = wrogAnimalCopy;
	return;
}

WrongAnimal			&WrongAnimal::operator=( WrongAnimal const &wrongAnimalCopy )
{
	std::cout << " [WrongAnimal] Copy assigment operator called" << std::endl;
	if ( this != &wrongAnimalCopy )
		this->_type = wrongAnimalCopy._type;

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
