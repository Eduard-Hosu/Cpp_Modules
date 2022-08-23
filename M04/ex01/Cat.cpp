/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:57:17 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain();
	std::cout << " [Cat] Default constructor called" << std::endl;
	return;
}

Cat::~Cat()
{
	std::cout << " [Cat] Destructor called" << std::endl;
	delete _brain;
	return;
}

Cat::Cat( Cat const &catCopy ) : Animal("Cat")
{
	std::cout << " [Cat] Copy constructor called" << std::endl;
	*this = catCopy;

	return;
}

Cat		&Cat::operator=( Cat const &catCopy )
{
	std::cout << " [Cat] Copy assigment operator called" << std::endl;
	if ( this != &catCopy )
	{
		this->_type = catCopy._type;
		this->_brain = new Brain();
	}
	
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << " [Cat] Meauuu, meauuu!" << std::endl;
	return;
}
