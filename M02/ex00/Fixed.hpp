/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:01:43 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/06 16:36:52 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <fstream>

class Fixed
{
	private:
		int					_fixedPointNumber;
		static const int	_numberFractionalBit = 8;
	public:
		Fixed( void );
		Fixed( int const fixedPoint );
		Fixed( Fixed const &fixedCoppy );
		~Fixed();

		Fixed &				operator=( Fixed const &fixedCoppy );
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
};

#endif
