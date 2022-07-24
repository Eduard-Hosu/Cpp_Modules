/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:05:08 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/24 19:20:45 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << " [Ice] Default constructor called" << std::endl;
	return;
}

Ice::~Ice()
{
	std::cout << " [Ice] Destructor called" << std::endl;
	return;
}

Ice::Ice( Ice const &iceCoppy ) : AMateria("ice")
{
	std::cout << " [Ice] Coppy constructor called" << std::endl;
	*this = iceCoppy;

	return;
}

Ice			&Ice::operator=( Ice const &iceCoppy )
{
	std::cout << " [Ice] Coppy assigment operator called" << std::endl;
	if ( this != &iceCoppy )
	{
		//TO DO: needs to e updated
		this->_type = iceCoppy._type;
	}
	
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice();
}

void		Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
