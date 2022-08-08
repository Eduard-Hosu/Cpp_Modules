/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:42:45 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/04 18:25:35 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char const **argv)
{
	if (argc != 2)
	{
		std::cout << "Ivalid number of arguments!" << std::endl;
		return (0);
	}
	if ( argv[1][0] == '\0')
	{
		std::cout << "Ivalid content!" << std::endl;
		return (0);
	}
	

	Conversion input_data(argv[1]);
	input_data.printConversions();

	return 0;
}

