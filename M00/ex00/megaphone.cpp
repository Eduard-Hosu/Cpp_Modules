/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:00:40 by ehosu             #+#    #+#             */
/*   Updated: 2022/05/17 11:41:49 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>


int main( int argc, char **argv )
{
	int i,j;

	if ( argc > 1 )
	{
		i = 1;
		while ( argv[i] )
		{
			j = 0;
			while ( argv[i][j] )
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	return (0);
}