/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:33:03 by ehosu             #+#    #+#             */
/*   Updated: 2022/05/24 13:37:32 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ): _bookSize(-1)
{
	std::cout << "******Your phonebook!******" << std::endl;
	return;
}

void	PhoneBook::addContact( void )
{
	if (this->_bookSize == -1)
		this->_bookSize++;
	this->_contacts[this->_bookSize % MAX_CONTACTS].createContact(this->_bookSize % MAX_CONTACTS);
	this->_bookSize++;
	std::cout << "A new contact was added to your contact list!" << std::endl;
	return;
}

void	PhoneBook::searchContact( void )
{
	int	contact_index;
	int	total_contacts;


	if ( this->_bookSize >= MAX_CONTACTS )
		total_contacts = MAX_CONTACTS;
	else
		total_contacts = this->_bookSize;
	
	this->viewAllContacts( total_contacts );

	std::cout << "Display a specific contact ID: ";
	std::cin >> contact_index;

	if ( std::cin.fail() )
	{
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cout << "Only numbers are accepted!" << std::endl;
		return;
	}

	if ( contact_index >= 0 && contact_index <= total_contacts - 1)
		this->_contacts[contact_index].viewFullContact();
	else
		std::cout << "Choose one of the indexes shown above!" << std::endl;
	return;
}

void	PhoneBook::viewAllContacts( int total )
{
	int	i = 0;

	std::cout << "******All your contacts!*****" << std::endl;
	while (i < total)
	{
		this->_contacts[i].viewContact();
		i++;
	}
	return;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "Bye bye!" << std::endl;
	return;
}


