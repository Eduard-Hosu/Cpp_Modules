/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:30:37 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/11 13:20:12 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ARRAY_HPP)
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int			_n;
		T *						_array;

	public:
		Array();
		Array( unsigned int n );
		Array( Array const &arrayCoppy );
		~Array();
		
		Array &			operator=( Array const &arrayCoppy );
		//check const
		T &				operator[]( unsigned int const &ind );

		unsigned int		size() const;
	
		class outOfBoundsException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};


#endif // ARRAY_HPP

//check new T[0]
template <typename T>
Array<T>::Array() :
	_n(0), _array(new T[0])
{
	return;
}

template <typename T>
Array<T>::Array( unsigned int n ) :
	_n(n), _array(new T[n])
{
	return;
}

template <typename T>
Array<T>::Array( Array<T> const &arrayCoppy ) : 
	_n(arrayCoppy.size()), _array(new T[arrayCoppy.size()])
{
	for (unsigned int i = 0; i < _n; i++)
		_array[i] = arrayCoppy._array[i];

	return;
}

template <typename T>
Array<T>		&Array<T>::operator=( Array<T> const &arrayCoppy )
{
	if ( this == &arrayCoppy)
		return *this;

	// delete[] _array;
	// _n = arrayCoppy.size();
	// _array = new T[arrayCoppy.size()];

	// for (unsigned int i = 0; i < _n; i++)
	// 	_array[i] = arrayCoppy._array[i];

	this->~Array();
	new(this) Array<T> (arrayCoppy);

	return *this;
}

template <typename T>
Array<T>::~Array()
{
	if (_n > 0)
		delete[] _array;

	return;
}

template <typename T>
T &				Array<T>::operator[]( unsigned int const &ind )
{
	if (ind >= _n)
		throw Array<T>::outOfBoundsException();

	return _array[ind];
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return _n;
}

template <typename T>
const char*		Array<T>::outOfBoundsException::what() const throw()
{
	return ("Given index is out of bounds!");
}