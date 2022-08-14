/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:45:04 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/14 11:46:23 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(EASYFIND_HPP)
# define EASYFIND_HPP
# include <iostream>
# include <exception>
# include <algorithm> 
# include <iterator>
# include <vector>
# include <list>
# include <ctime>
# include <cstdlib>
# define MAX_RANGE 50
# define MAX_NUMB 10

template< typename T >
typename T::iterator		easyfind( T &container, int find )
{
	typename T::iterator itr = std::find(container.begin(), container.end(), find);
	if (itr == container.end())
		throw std::invalid_argument("Element was not found in the given container");

	return itr;
}

int							randomNumb()
{
	return std::rand() % MAX_RANGE;
}

#endif // EASYFIND_HPP
