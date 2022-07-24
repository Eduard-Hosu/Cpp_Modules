/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:40:19 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/24 17:49:41 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << " [AMateria] Default constructor called" << std::endl;
	return;
}

AMateria::AMateria( std::string const &type ) : _type(type)
{
	std::cout << " [AMateria] Default constructor with parameter " << _type << " called" << std::endl;
	return;
}

AMateria::~AMateria()
{
	std::cout << " [AMateria] Destructor called" << std::endl;
	return;
}

AMateria::AMateria( AMateria const &aMateriaCoppy )
{
	std::cout << " [AMateria] Coppy constructor called" << std::endl;
	*this = aMateriaCoppy;

	return;
}

AMateria			&AMateria::operator=( AMateria const &aMateriaCoppy )
{
	std::cout << " [AMateria] Coppy assigment operator called" << std::endl;
	if ( this != &aMateriaCoppy )
	{
		//TO DO: needs to e updated
		this->_type = aMateriaCoppy._type;
	}
	
	return *this;
}

std::string			const &AMateria::getType( void ) const
{
	return this->_type;
}

void 		AMateria::use( ICharacter& target )
{ 
	(void)target; 
	return;
}

