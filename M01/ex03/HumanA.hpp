/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:14:17 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/24 16:08:08 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string		_name;
		Weapon&			_weapon;

	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA();
		void			attack();
};


#endif