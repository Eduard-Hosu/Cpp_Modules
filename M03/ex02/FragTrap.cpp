/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:18:02 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/20 16:53:43 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_energy = 100;
	_attackDamage = 30;
	_health = 100;
	std::cout << "[ FragTrap ] Default constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "[ FragTrap ] Destructor called for name = " << _name << std::endl;
	return;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	_energy = 100;
	_attackDamage = 30;
	_health = 100;
	std::cout << "[ FragTrap ] Default constructor with parameter called" << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const &fragTrapCoppy ) : ClapTrap(fragTrapCoppy._name)
{
	std::cout << "[ FragTrap ] Coppy constructor called" << std::endl;
	*this = fragTrapCoppy;
	return;
}

FragTrap	&FragTrap::operator=( FragTrap const &fragTrapCoppy )
{
	std::cout << "[ FragTrap ] Coppy assigment operator called" << std::endl;
	if ( this != &fragTrapCoppy )
	{
		this->_name = fragTrapCoppy._name;
		this->_attackDamage = fragTrapCoppy._attackDamage;
		this->_energy = fragTrapCoppy._energy;
		this->_health = fragTrapCoppy._health;
	}

	return *this;
}

void		FragTrap::highFivesGuys( void )
{
	if ( _health <= 0 )
	{
		std::cout << "FragTrap " << _name << " is dead!" << std::endl;
		return;
	}
	if ( _energy == 0 )
	{
		std::cout << "FragTrap " << _name << " has no energy left!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " is asking for a high five!" << std::endl;
	return;
}
