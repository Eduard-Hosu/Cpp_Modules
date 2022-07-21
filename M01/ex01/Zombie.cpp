/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:07:56 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/22 19:36:37 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return;
}

Zombie::~Zombie( void )
{
	std::cout << _name << ": Back to grave..." << std::endl;
	return;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
	return;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

