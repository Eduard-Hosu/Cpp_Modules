/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:47:11 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:07:24 by ehosu            ###   ########.fr       */
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

Fixed::Fixed( Fixed const &fixedCopy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedCopy;
	return;
}

Fixed::Fixed( int const numb )
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointNumber = numb << _numberFractionalBits;
	return;
}

Fixed::Fixed( float const numb )
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointNumber = roundf( numb * (1 << _numberFractionalBits) );
	return;
}

Fixed	&Fixed::operator=( Fixed const &fixedCopy )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &fixedCopy )
		_fixedPointNumber = fixedCopy.getRawBits();
	return *this;

}

void	Fixed::setRawBits( int const raw )
{
	_fixedPointNumber = raw;
	return;
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointNumber;
}

int		Fixed::toInt( void ) const
{
	return (this->_fixedPointNumber >> _numberFractionalBits);
}

float	Fixed::toFloat( void ) const
{
	return (this->_fixedPointNumber / (float)(1 << _numberFractionalBits));
}

std::ostream &		operator<<( std::ostream &o, Fixed const &fixedCopy )
{
	o << fixedCopy.toFloat();
	return o;
}
