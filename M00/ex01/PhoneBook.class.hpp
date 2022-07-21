/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:33:12 by ehosu             #+#    #+#             */
/*   Updated: 2022/05/21 11:50:59 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H
# include "Contact.class.hpp"
# include <iostream>
# include <iomanip>
# include <sstream>
# define MAX_CONTACTS 8

	class PhoneBook
	{
		private:
			Contact		_contacts[MAX_CONTACTS];
			int			_bookSize;

		public:
			PhoneBook( void );
			~PhoneBook( void );

			void		viewAllContacts( int total );
			void		addContact( void );
			void		searchContact( void );
	};

#endif