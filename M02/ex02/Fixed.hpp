/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:01:43 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:07:24 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>

class Fixed
{
	private:
		int					_fixedPointNumber;
		static const int	_numberFractionalBits = 8;
	public:
		Fixed( void );
		Fixed( int const numb );
		Fixed( float const numb );
		Fixed( Fixed const &fixedCopy );
		~Fixed();
		
		Fixed &				operator=( Fixed const &fixedCopy );
		Fixed				operator+( Fixed const &fixedCopy );
		Fixed				operator-( Fixed const &fixedCopy );
		Fixed				operator*( Fixed const &fixedCopy );
		Fixed				operator/( Fixed const &fixedCopy );

		Fixed				operator++( int );
		Fixed &				operator++( void );
		Fixed				operator--( int );
		Fixed &				operator--( void );

		bool				operator<( Fixed const &fixedCopy );
		bool				operator>( Fixed const &fixedCopy );
		bool				operator>=( Fixed const &fixedCopy );
		bool				operator<=( Fixed const &fixedCopy );
		bool				operator==( Fixed const &fixedCopy );
		bool				operator!=( Fixed const &fixedCopy );

		static Fixed &			min( Fixed &fixedCopy1, Fixed &fixedCopy2 );
		static Fixed const 		&min( Fixed const &fixedCopy1, Fixed const &fixedCopy2 );
		static Fixed &			max( Fixed &fixedCopy1, Fixed &fixedCopy2 );
		static Fixed const		&max( Fixed const &fixedCopy1, Fixed const &fixedCopy2 );

		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		float				toFloat( void ) const;
		int					toInt( void ) const;
};

std::ostream &		operator<<( std::ostream &o, Fixed const &fixedCopy );

#endif
