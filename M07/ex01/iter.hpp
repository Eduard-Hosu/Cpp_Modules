/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:26:28 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/09 15:59:19 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ITER_HPP)
# define ITER_HPP
# include <iostream>

template< typename T, typename U >
void		iter(T *arr_adr, unsigned int len, U alter_func)
{
	for (size_t i = 0; i < len; i++)
		alter_func(arr_adr[i]);
	
}

template< typename T >
void		plusTwo(T &e)
{
	e += 2;
	return;
}

template< typename T >
void		printElements(T const &e)
{
	std::cout << e << std::endl;
	return;
}

#endif // ITER_HPP
