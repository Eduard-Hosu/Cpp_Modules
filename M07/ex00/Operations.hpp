/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operations.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:09:06 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/08 18:41:59 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(OPERATIONS_HPP)
# define OPERATIONS_HPP
# include <iostream>

template< typename Type >
Type const & max(Type const &x, Type const &y)
{
	return ( (x>y) ? x : y );
}

template< typename Type >
Type const & min(Type const &x, Type const &y)
{
	return ( (x<y) ? x : y );
}

template< typename Type >
void 		swap(Type &x, Type &y)
{
	Type coppy;

	coppy = x;
	x = y;
	y = coppy;

	return ;
}

#endif // OPERATIONS_HPP
