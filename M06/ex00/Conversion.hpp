/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:54:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:31 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CONVERSION_HPP)
# define CONVERSION_HPP
# include <iostream>
# include <sstream>
# include <limits>
# include <cstdlib>
# include <cstdio>
# include <cctype>
# include <iomanip>
# include <cmath>

enum conv_type {
	ERROR,
	TO_NUMB,
	TO_FLOAT,
	TO_CHAR,
	TO_DOUBLE,
	TO_FLOAT_M,
	TO_DOUBLE_M
};

class Conversion
{
	private:
		std::string			_input;
		conv_type			_inputType;
		double				_inputValue;

		void				_toChar();
		void				_toInt();
		void				_toFloat();
		void				_toDouble();
	public:
		Conversion();
		Conversion( const std::string input );
		Conversion( Conversion const &conversionCopy );
		~Conversion();

		//operators
		Conversion &		operator=( Conversion const &conversionCopy );

		//member functions
		conv_type			getInputType();
		void				setInputValue();
		void				printConversions();
	
};

#endif // CONVERSION_HPP
