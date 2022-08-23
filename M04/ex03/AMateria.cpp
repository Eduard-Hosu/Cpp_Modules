/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:40:19 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
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

AMateria::AMateria( AMateria const &aMateriaCopy )
{
	std::cout << " [AMateria] Copy constructor called" << std::endl;
	*this = aMateriaCopy;

	return;
}

AMateria			&AMateria::operator=( AMateria const &aMateriaCopy )
{
	std::cout << " [AMateria] Copy assigment operator called" << std::endl;
	if ( this != &aMateriaCopy )
	{
		this->_type = aMateriaCopy._type;
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

