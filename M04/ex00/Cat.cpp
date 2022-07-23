/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:57:17 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 09:20:10 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << " [Cat] Default constructor called" << std::endl;
	return;
}

Cat::~Cat()
{
	std::cout << " [Cat] Destructor called" << std::endl;
	return;
}

Cat::Cat( Cat const &catCoppy ) : Animal("Cat")
{
	std::cout << " [Cat] Coppy constructor called" << std::endl;
	*this = catCoppy;

	return;
}

Cat		&Cat::operator=( Cat const &catCoppy )
{
	std::cout << " [Cat] Coppy assigment operator called" << std::endl;
	if ( this != &catCoppy )
	{
		this->_type = catCoppy._type;
	}
	
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << " [Cat] Meauuu, meauuu!" << std::endl;
	return;
}
