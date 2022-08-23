/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:24:58 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/19 12:08:23 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SPAN_HPP)
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <climits>
# include <ctime>
# include <cstdlib>
# include <climits>
# define MAX_RANGE 10000

class Span
{
	private:
		unsigned int			_n;
		std::vector<int>		_vector;

		Span();

	public:
		Span( unsigned int n );
		Span( Span const &spanCoppy );
		~Span();

		//overloads
		Span &					operator=( Span const &spanCoppy );

		//member functions
		void					addNumber( unsigned int nb );
		unsigned int			shortestSpan();
		unsigned int			longestSpan();
		void					printVector();
		void					randomVector();
		static int				randomNumb();

		//exeptions
		class outOfBoundsException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class notenoughElementsException : public std::exception
		{
			public:
				const char* what() const throw();
		};

};

#endif // SPAN_HPP
