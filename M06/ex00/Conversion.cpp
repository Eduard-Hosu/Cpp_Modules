/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:22:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:31 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion()
{
	return;
}

Conversion::Conversion( const std::string input ) : _input(input)
{
	_inputType = this->getInputType();
	this->setInputValue();
	return;
}

Conversion::~Conversion()
{
	return;
}

Conversion::Conversion( Conversion const &conversionCopy )
{
	*this = conversionCopy;

	return;
}

Conversion &			Conversion::operator=( Conversion const &conversionCopy )
{
	if (this != &conversionCopy)
	{
		this->_input = conversionCopy._input;
		this->_inputValue = conversionCopy._inputValue;
		this->_inputType = conversionCopy._inputType;
	}

	return *this;
}

//TO DO: Update this!
void					Conversion::setInputValue()
{
	char		c;

	std::istringstream		hold_input(_input);

	if (_inputType == TO_CHAR)
	{
		hold_input >> c;
		_inputValue = c;
		return;
	}
	if (_inputType == TO_FLOAT)
	{
		_inputValue = std::atof(_input.c_str());
		return;
	}
	hold_input >> _inputValue;

	return;
}

conv_type				Conversion::getInputType()
{
	int						to_int;
	int						f_digits;
	int						d_digits;
	char					d_point;
	std::string				f;
	double					to_double;
	std::string				special_strings[] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	std::istringstream		hold_input(_input);
	if (_input.length() == 1 && !std::isdigit(_input[0]))
		return TO_CHAR;

	hold_input >> to_int;
	if (hold_input.eof() && !hold_input.fail())
		return TO_NUMB;

	hold_input.clear();
	hold_input.seekg(0, std::ios_base::beg);

	hold_input >> f_digits;
	hold_input >> d_point;
	hold_input >> d_digits;
	hold_input >> f;
	if (d_point == '.' && f == "f" && hold_input.eof() && !hold_input.fail())
		return TO_FLOAT;
	
	hold_input.clear();
	hold_input.seekg(0, std::ios_base::beg);

	hold_input >> to_double;
	if (hold_input.eof() && !hold_input.fail())
		return TO_NUMB;

	hold_input.clear();
	hold_input.seekg(0, std::ios_base::beg);

	for (unsigned int i = 0; i < 6; i++)
	{
		if (special_strings[i] == _input)
		{
			if (i < 3)
				return TO_FLOAT_M;
			else
				return TO_DOUBLE_M;
		}
	}
	
	return ERROR;
}

void					Conversion::_toInt()
{

	std::cout << "int: ";
	if ( _inputType == ERROR || _inputType == TO_FLOAT_M || _inputType == TO_DOUBLE_M )
		std::cout << "impossible";
	else if ( static_cast<int>(_inputValue) == std::numeric_limits<int>::min() && _input != "-2147483648")
		std::cout << "overflow";
	else
		std::cout << static_cast<int>(_inputValue);
	std::cout << std::endl;
	
	return;
}

void					Conversion::_toFloat()
{
	std::cout << "float: ";
	if (_inputType == TO_FLOAT_M)
		std::cout << _input;
	else if (_inputType == TO_DOUBLE_M)
		std::cout << _input + "f";
	else if ( _inputType == ERROR )
		std::cout << "impossible";
	else
	{	
		std::cout << std::fixed << std::setprecision(1);
		std::cout << static_cast<double>(_inputValue) << "f";
	}

	std::cout << std::endl;

	return;
}

void					Conversion::_toDouble()
{
	std::cout << "double: ";
	if (_inputType == TO_DOUBLE_M)
		std::cout << _input;
	else if (_inputType == TO_FLOAT_M)
		std::cout << _input.substr(0, _input.size() - 1);
	else if ( _inputType == ERROR )
		std::cout << "impossible";
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << static_cast<double>(_inputValue);
	}
	std::cout << std::endl;

	return;
}

void					Conversion::_toChar()
{
	std::cout << "char: ";
	if (_inputType == ERROR || _inputType == TO_FLOAT_M || _inputType == TO_DOUBLE_M )
		std::cout << "impossible";
	else if (!isprint(static_cast<char>(_inputValue)))
		std::cout << "not displayable!";
	else
		std::cout << static_cast<char>(_inputValue);
	std::cout << std::endl;

	return;
}

void					Conversion::printConversions()
{
	this->_toChar();
	this->_toInt();
	this->_toFloat();
	this->_toDouble();

	return;
}
