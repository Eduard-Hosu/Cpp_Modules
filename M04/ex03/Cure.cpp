/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:23:12 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/24 19:25:19 by ehosu            ###   ########.fr       */
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

Cure::Cure( Cure const &cureCoppy ) : AMateria("cure")
{
	std::cout << " [Cure] Coppy constructor called" << std::endl;
	*this = cureCoppy;

	return;
}

Cure			&Cure::operator=( Cure const &cureCoppy )
{
	std::cout << " [Cure] Coppy assigment operator called" << std::endl;
	if ( this != &cureCoppy )
	{
		//TO DO: needs to e updated
		this->_type = cureCoppy._type;
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
