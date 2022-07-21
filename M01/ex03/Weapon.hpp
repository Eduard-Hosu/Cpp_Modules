/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:37:17 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/24 16:12:25 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Weapon
{
	private:
		std::string		_type;

	public:
		Weapon( std::string type );
		~Weapon();
		std::string const & getType() const;
		void				setType( std::string type );
};

#endif
