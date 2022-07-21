/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:13:54 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/24 16:41:30 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ):
	_name(name),
	_weapon(weapon)
{
	return;
}

HumanA::~HumanA( void )
{
	return;
}

void	HumanA::attack()
{
	std::cout << _name << "attacks with their " << _weapon.getType() << std::endl;
	return;
}