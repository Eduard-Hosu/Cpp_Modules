/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:47:11 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/06 13:48:17 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const &fixedCoppy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedCoppy;
	return;
}

Fixed	&Fixed::operator=( Fixed const &fixedCoppy )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &fixedCoppy )
		_fixedPointNumber = fixedCoppy.getRawBits();
	return *this;

}

void	Fixed::setRawBits( int const raw )
{
	_fixedPointNumber = raw;
	return;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointNumber;
}




