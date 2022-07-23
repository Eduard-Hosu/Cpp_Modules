/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 02:37:01 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 09:20:15 by ehosu            ###   ########.fr       */
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

Dog::Dog( Dog const &dogCoppy ) : Animal("Dog")
{
	std::cout << " [Dog] Coppy constructor called" << std::endl;
	*this = dogCoppy;

	return;
}

Dog		&Dog::operator=( Dog const &dogCoppy )
{
	std::cout << " [Dog] Coppy assigment operator called" << std::endl;
	if ( this != &dogCoppy )
		this->_type = dogCoppy._type;
	
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << " [Dog] Ham! Ham!, Auuuuu" << std::endl;
	return;
}