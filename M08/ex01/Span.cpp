/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:40:34 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:11:06 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	return;
}

Span::Span( unsigned int n ) : _n(n)
{
	std::vector<int> _vector (n);
	return;
}

Span::~Span()
{
	return;
}

Span::Span( Span const &spanCopy )
{
	*this = spanCopy;

	return;
}

Span &				Span::operator=( Span const &spanCopy )
{
	if (this != &spanCopy)
	{
		this->_n = spanCopy._n;
		this->_vector = spanCopy._vector;
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
	int oldSize = _vector.size();
	_vector.resize(_n);
	std::generate(_vector.begin() + oldSize, _vector.end(), randomNumb);
	_n = _vector.size();

	return;
}

int			Span::randomNumb()
{
	return (std::rand() % MAX_RANGE);
}