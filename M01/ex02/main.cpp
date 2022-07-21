/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:57:32 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/23 13:40:35 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "The memory address of the string: "
			<< &string << std::endl;
	std::cout << "The memory address held by stringPTR: "
		<< stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: "
		<< &stringREF << std::endl;

	std::cout << " " << std::endl;

	std::cout << "The value of the string: "
			<< string << std::endl;
	std::cout << "The value pointed to by stringPTR: "
		<< *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: "
		<< stringREF << std::endl;

	return (0);
}