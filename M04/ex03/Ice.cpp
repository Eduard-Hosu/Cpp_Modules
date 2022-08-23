/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:05:08 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
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

Ice::Ice( Ice const &iceCopy ) : AMateria("ice")
{
	std::cout << " [Ice] Copy constructor called" << std::endl;
	*this = iceCopy;

	return;
}

Ice			&Ice::operator=( Ice const &iceCopy )
{
	std::cout << " [Ice] Copy assigment operator called" << std::endl;
	if ( this != &iceCopy )
	{
		//TO DO: needs to e updated
		this->_type = iceCopy._type;
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
