/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operations.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:09:06 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:45 by ehosu            ###   ########.fr       */
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
	Type Copy;

	Copy = x;
	x = y;
	y = Copy;

	return ;
}

#endif // OPERATIONS_HPP
