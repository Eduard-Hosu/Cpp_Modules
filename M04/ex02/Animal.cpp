/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:48:40 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 16:10:14 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Random")
{
	std::cout << " [Animal] Default constructor called" << std::endl;
	return;
}

Animal::~Animal()
{
	std::cout << " [Animal] Destructor called" << std::endl;
	return;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << " [Animal] Default constructor with parameter called" << std::endl;
	return;
}

Animal::Animal( Animal const &animalCoppy )
{
	std::cout << " [Animal] Coppy constructor called" << std::endl;
	*this = animalCoppy;

	return;
}

Animal			&Animal::operator=( Animal const &animalCoppy )
{
	std::cout << " [Animal] Coppy assigment operator called" << std::endl;
	if ( this != &animalCoppy )
		this->_type = animalCoppy._type;
	
	return *this;
}

std::string		Animal::getType( void ) const
{
	return this->_type;
}