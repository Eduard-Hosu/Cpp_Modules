/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:01:43 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/07 16:55:17 by ehosu            ###   ########.fr       */
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
		Fixed( Fixed const &fixedCoppy );
		~Fixed();
		
		Fixed &				operator=( Fixed const &fixedCoppy );
		Fixed				operator+( Fixed const &fixedCoppy );
		Fixed				operator-( Fixed const &fixedCoppy );
		Fixed				operator*( Fixed const &fixedCoppy );
		Fixed				operator/( Fixed const &fixedCoppy );

		Fixed				operator++( int );
		Fixed &				operator++( void );
		Fixed				operator--( int );
		Fixed &				operator--( void );

		bool				operator<( Fixed const &fixedCoppy );
		bool				operator>( Fixed const &fixedCoppy );
		bool				operator>=( Fixed const &fixedCoppy );
		bool				operator<=( Fixed const &fixedCoppy );
		bool				operator==( Fixed const &fixedCoppy );
		bool				operator!=( Fixed const &fixedCoppy );

		static Fixed &			min( Fixed &fixedCoppy1, Fixed &fixedCoppy2 );
		static Fixed const 		&min( Fixed const &fixedCoppy1, Fixed const &fixedCoppy2 );
		static Fixed &			max( Fixed &fixedCoppy1, Fixed &fixedCoppy2 );
		static Fixed const		&max( Fixed const &fixedCoppy1, Fixed const &fixedCoppy2 );

		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		float				toFloat( void ) const;
		int					toInt( void ) const;
};

std::ostream &		operator<<( std::ostream &o, Fixed const &fixedCoppy );

#endif
