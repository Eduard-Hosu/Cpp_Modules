/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:28:17 by ehosu             #+#    #+#             */
/*   Updated: 2022/05/24 13:46:17 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void )
{
	return;
}

void		Contact::createContact( int i )
{
	this->_id = i;
	std::cout << "Enter first name: ";
	std::getline(std::cin >> std::ws, Contact::_first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin >> std::ws, Contact::_last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin >> std::ws, Contact::_nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin >> std::ws, Contact::_phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin >> std::ws, Contact::_darkest_secret);
	return;
}

std::string	Contact::truncate( std::string str )
{
	if ( str.length() > 10 )
	{
		str.resize(9);
		return str + ".";
	}
	return str;
}

void		Contact::viewContact( void )
{
	std::cout << "|" << std::setw(10) << this->_id;
	std::cout << "|" << std::setw(10) << truncate( this->_first_name );
	std::cout << "|" << std::setw(10) << truncate( this->_last_name );
	std::cout << "|" << std::setw(10) << truncate( this->_nickname ) << "|" << std::endl;
	return;
}

void		Contact::viewFullContact( void )
{
	std::cout << "Index: " << this->_id << std::endl;
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nicknane: " << this->_nickname << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
	return;
}

Contact::~Contact( void )
{
	return;
}
