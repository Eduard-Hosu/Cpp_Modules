/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 02:37:01 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << " [Dog] Default constructor called" << std::endl;
	return;
}

Dog::~Dog()
{
	std::cout << " [Dog] Destructor called" << std::endl;
	return;
}

Dog::Dog( Dog const &dogCopy ) : Animal("Dog")
{
	std::cout << " [Dog] Copy constructor called" << std::endl;
	*this = dogCopy;

	return;
}

Dog		&Dog::operator=( Dog const &dogCopy )
{
	std::cout << " [Dog] Copy assigment operator called" << std::endl;
	if ( this != &dogCopy )
		this->_type = dogCopy._type;
	
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << " [Dog] Ham! Ham!, Auuuuu" << std::endl;
	return;
}