/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:21:50 by ehosu             #+#    #+#             */
/*   Updated: 2022/05/23 17:35:51 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
# include <string>
# include <iomanip>

  class Contact
  {
	private:
		int				_id;
		std::string		_darkest_secret;
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;

	public:
		Contact();
		~Contact();

		void			createContact( int i );
		void			viewFullContact( void );
		void			viewContact( void );
		std::string		truncate( std::string str );
  };

#endif