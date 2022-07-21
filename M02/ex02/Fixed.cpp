/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:47:11 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/07 16:55:05 by ehosu            ###   ########.fr       */
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

Fixed::Fixed( Fixed const &fixedCoppy )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixedCoppy;
	return;
}

Fixed::Fixed( int const numb )
{
	// std::cout << "Int constructor called" << std::endl;
	_fixedPointNumber = numb * pow( 2, _numberFractionalBits );
	return;
}

Fixed::Fixed( float const numb )
{
	// std::cout << "Float constructor called" << std::endl;
	_fixedPointNumber = roundf( numb * pow(2, _numberFractionalBits) );
	return;
}



Fixed		&Fixed::min( Fixed &fixedCoppy1, Fixed &fixedCoppy2 )
{
	if ( fixedCoppy1.getRawBits() < fixedCoppy2.getRawBits() )
		return fixedCoppy1;
	return fixedCoppy2;
}

Fixed const	&Fixed::min( Fixed const &fixedCoppy1, Fixed const &fixedCoppy2 )
{
	if ( fixedCoppy1.getRawBits() < fixedCoppy2.getRawBits() )
		return fixedCoppy1;
	return fixedCoppy2;
}

Fixed		&Fixed::max( Fixed &fixedCoppy1, Fixed &fixedCoppy2 )
{
	if ( fixedCoppy1.getRawBits() > fixedCoppy2.getRawBits() )
		return fixedCoppy1;
	return fixedCoppy2;
}

Fixed const	&Fixed::max( Fixed const &fixedCoppy1, Fixed const &fixedCoppy2 )
{
	if ( fixedCoppy1.getRawBits() > fixedCoppy2.getRawBits() )
		return fixedCoppy1;
	return fixedCoppy2;
}


Fixed	&Fixed::operator=( Fixed const &fixedCoppy )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &fixedCoppy )
		_fixedPointNumber = fixedCoppy.getRawBits();
	return *this;
}

Fixed	Fixed::operator+( Fixed const &fixedCoppy )
{
	return ( Fixed(this->toFloat() + fixedCoppy.toFloat()) );
}

Fixed	Fixed::operator-( Fixed const &fixedCoppy )
{
	return ( Fixed(this->toFloat() - fixedCoppy.toFloat()) );
}

Fixed	Fixed::operator*( Fixed const &fixedCoppy )
{
	return ( Fixed(this->toFloat() * fixedCoppy.toFloat()) );
}

Fixed	Fixed::operator/( Fixed const &fixedCoppy )
{
	return ( Fixed(this->toFloat() / fixedCoppy.toFloat()) );
}



bool	Fixed::operator>( Fixed const &fixedCoppy )
{
	return ( _fixedPointNumber > fixedCoppy.getRawBits() );
}

bool	Fixed::operator<( Fixed const &fixedCoppy )
{
	return ( _fixedPointNumber < fixedCoppy.getRawBits() );
}

bool	Fixed::operator>=( Fixed const &fixedCoppy )
{
	return ( _fixedPointNumber >= fixedCoppy.getRawBits() );
}

bool	Fixed::operator<=( Fixed const &fixedCoppy )
{
	return ( _fixedPointNumber <= fixedCoppy.getRawBits() );
}

bool	Fixed::operator==( Fixed const &fixedCoppy )
{
	return ( _fixedPointNumber == fixedCoppy.getRawBits() );
}

bool	Fixed::operator!=( Fixed const &fixedCoppy )
{
	return ( _fixedPointNumber != fixedCoppy.getRawBits() );
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
	return (_fixedPointNumber / pow(2, _numberFractionalBits));
}

float	Fixed::toFloat( void ) const
{
	return (_fixedPointNumber / pow(2, _numberFractionalBits));
}

std::ostream &		operator<<( std::ostream &o, Fixed const &fixedCoppy )
{
	o << fixedCoppy.toFloat();
	return o;
}
