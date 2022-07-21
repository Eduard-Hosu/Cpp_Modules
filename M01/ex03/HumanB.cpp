/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:36:34 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/24 16:48:41 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ):
	_name(name),
	_weapon(NULL)
{
	return;
}

HumanB::~HumanB( void )
{
	return;
}

void	HumanB::setWeapon( Weapon&	weapon )
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << "attacks with their ";
	if (_weapon)
		std::cout << (*_weapon).getType() << std::endl;
	else
		std::cout << "hends" << std::endl;
	
	return;
}