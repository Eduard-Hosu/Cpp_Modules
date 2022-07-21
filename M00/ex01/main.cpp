/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:46:35 by ehosu             #+#    #+#             */
/*   Updated: 2022/05/24 13:59:01 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main( void )
{
	PhoneBook		phonebook;
	std::string		command;

	std::cout << "The program only accepts ADD, SEARCH and EXIT" << std::endl;
	while ( command != "EXIT" )
	{
		std::getline( std::cin >> std::ws, command );
		if ( std::cin.eof() )
		{
			std::cin.clear();
			std::cin.ignore();
			continue;
		}
		if ( command == "ADD" )
		{
			phonebook.addContact();
			continue;
		}
		if ( command == "SEARCH" )
		{
			phonebook.searchContact();
			continue;
		}
		if ( command == "EXIT" )
			continue;
		std::cout << "Remember, the program only accepts ADD, SEARCH and EXIT!" << std::endl;
	}
	return (0);
}