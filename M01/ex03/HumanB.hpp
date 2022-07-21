/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:35:07 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/24 16:23:54 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string		_name;
		Weapon*			_weapon;

	public:
		HumanB( std::string name );
		~HumanB();
		void			attack();
		void			setWeapon( Weapon& weapon );
};


#endif