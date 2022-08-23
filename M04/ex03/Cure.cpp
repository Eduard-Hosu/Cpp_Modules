/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:23:12 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << " [Cure] Default constructor called" << std::endl;
	return;
}

Cure::~Cure()
{
	std::cout << " [Cure] Destructor called" << std::endl;
	return;
}

Cure::Cure( Cure const &cureCopy ) : AMateria("cure")
{
	std::cout << " [Cure] Copy constructor called" << std::endl;
	*this = cureCopy;

	return;
}

Cure			&Cure::operator=( Cure const &cureCopy )
{
	std::cout << " [Cure] Copy assigment operator called" << std::endl;
	if ( this != &cureCopy )
	{
		//TO DO: needs to e updated
		this->_type = cureCopy._type;
	}

	return *this;
}

AMateria*	Cure::clone() const
{
	return new Cure();
}

void		Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
} 
