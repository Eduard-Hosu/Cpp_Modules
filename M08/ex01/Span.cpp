/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:40:34 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/17 11:24:43 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	return;
}

Span::Span( unsigned int n ) : _n(n)
{
	return;
}

Span::~Span()
{
	return;
}

Span::Span( Span const &spanCoppy )
{
	*this = spanCoppy;

	return;
}

Span &				Span::operator=( Span const &spanCoppy )
{
	if (this != &spanCoppy)
	{
		this->_n = spanCoppy._n;
		this->_vector = spanCoppy._vector;
	}

	return *this;
}

void				Span::addNumber( unsigned int nb )
{
	if ( this->_vector.size() >= this->_n )
		throw Span::outOfBoundsException();
	this->_vector.insert(_vector.end(), nb);

	return;
}

void				Span::printVector()
{
	for (std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	return;
}

unsigned int		Span::shortestSpan()
{
	if (this->_vector.size() < 2)
		throw Span::notenoughElementsException();
	
	int short_span = INT_MAX;
	std::sort(this->_vector.begin(), this->_vector.end());
	for (std::vector<int>::iterator it = this->_vector.begin() + 1; it != this->_vector.end(); ++it)
		if( *it - *(it - 1) < short_span )
			short_span = *it - *(it - 1);
	
	return short_span;
}

unsigned int		Span::longestSpan()
{
	if (this->_vector.size() < 2)
		throw Span::notenoughElementsException();

	return (*std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end()));
}

const char*			Span::outOfBoundsException::what() const throw()
{
	return ("Given index is out of bounds!");
}

const char*			Span::notenoughElementsException::what() const throw()
{
	return ("Operation not possible, not enough elements!");
}

void				Span::randomVector()
{
	std::generate(_vector.begin(), _vector.end(), randomNumb);

	return;
}

int			Span::randomNumb()
{
	std::cout << "here" << std::endl;
	return (std::rand() % MAX_RANGE);
}