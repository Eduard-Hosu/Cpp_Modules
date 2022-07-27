/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:54:55 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/26 15:08:09 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	main(int argc, char **argv)
{
	File	file;

	if (argc != 4)
	{
		std::cout << "Ivalid number of arguments!" << std::endl;
		return (0);
	}
	if ( argv[1][0] == '\0' || argv[2][0] == '\0' )
	{
		std::cout << "Ivalid content!" << std::endl;
		return (0);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	
	if ( !file.isOpen( filename ) )
		return 0;
	file.replace_s1_with_s2_in_file( s1, s2 );
	if ( !file.createNewFile() )
		return 0;
	return (1);
}