/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:44:29 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/24 13:53:20 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ): _type(type)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

std::string	const &	Weapon::getType() const
{
	return _type;
}

void				Weapon::setType( std::string type )
{
	this->_type = type;
}
