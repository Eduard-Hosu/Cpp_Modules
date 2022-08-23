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
	// std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const &fixedCopy )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixedCopy;
	return;
}

Fixed::Fixed( int const numb )
{
	// std::cout << "Int constructor called" << std::endl;
	_fixedPointNumber = numb << _numberFractionalBits;
	return;
}

Fixed::Fixed( float const numb )
{
	// std::cout << "Float constructor called" << std::endl;
	_fixedPointNumber = roundf( numb * (1 << _numberFractionalBits) );
	return;
}



Fixed		&Fixed::min( Fixed &fixedCopy1, Fixed &fixedCopy2 )
{
	if ( fixedCopy1.getRawBits() < fixedCopy2.getRawBits() )
		return fixedCopy1;
	return fixedCopy2;
}

Fixed const	&Fixed::min( Fixed const &fixedCopy1, Fixed const &fixedCopy2 )
{
	if ( fixedCopy1.getRawBits() < fixedCopy2.getRawBits() )
		return fixedCopy1;
	return fixedCopy2;
}

Fixed		&Fixed::max( Fixed &fixedCopy1, Fixed &fixedCopy2 )
{
	if ( fixedCopy1.getRawBits() > fixedCopy2.getRawBits() )
		return fixedCopy1;
	return fixedCopy2;
}

Fixed const	&Fixed::max( Fixed const &fixedCopy1, Fixed const &fixedCopy2 )
{
	if ( fixedCopy1.getRawBits() > fixedCopy2.getRawBits() )
		return fixedCopy1;
	return fixedCopy2;
}


Fixed	&Fixed::operator=( Fixed const &fixedCopy )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &fixedCopy )
		_fixedPointNumber = fixedCopy.getRawBits();
	return *this;
}

Fixed	Fixed::operator+( Fixed const &fixedCopy )
{
	return ( Fixed(this->toFloat() + fixedCopy.toFloat()) );
}

Fixed	Fixed::operator-( Fixed const &fixedCopy )
{
	return ( Fixed(this->toFloat() - fixedCopy.toFloat()) );
}

Fixed	Fixed::operator*( Fixed const &fixedCopy )
{
	return ( Fixed(this->toFloat() * fixedCopy.toFloat()) );
}

Fixed	Fixed::operator/( Fixed const &fixedCopy )
{
	return ( Fixed(this->toFloat() / fixedCopy.toFloat()) );
}



bool	Fixed::operator>( Fixed const &fixedCopy )
{
	return ( _fixedPointNumber > fixedCopy.getRawBits() );
}

bool	Fixed::operator<( Fixed const &fixedCopy )
{
	return ( _fixedPointNumber < fixedCopy.getRawBits() );
}

bool	Fixed::operator>=( Fixed const &fixedCopy )
{
	return ( _fixedPointNumber >= fixedCopy.getRawBits() );
}

bool	Fixed::operator<=( Fixed const &fixedCopy )
{
	return ( _fixedPointNumber <= fixedCopy.getRawBits() );
}

bool	Fixed::operator==( Fixed const &fixedCopy )
{
	return ( _fixedPointNumber == fixedCopy.getRawBits() );
}

bool	Fixed::operator!=( Fixed const &fixedCopy )
{
	return ( _fixedPointNumber != fixedCopy.getRawBits() );
}

Fixed	Fixed::operator++( int )
{
	Fixed	temp = *this;
	++*this;
	return temp;
}

Fixed	Fixed::operator--( int )
{
	Fixed	temp = *this;
	--*this;
	return temp;
}

Fixed	&Fixed::operator--( void )
{
	this->_fixedPointNumber++;
	return *this;
}

Fixed	&Fixed::operator++( void )
{
	this->_fixedPointNumber++;
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
