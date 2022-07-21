/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:18:55 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/19 16:59:17 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_energy = 50;
	_attackDamage = 20;
	_health = 100;
	_gardGateMode = false;
	std::cout << "[ ScavTrap ] Default constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ ScavTrap ] Destructor called for name = " << _name << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	_energy = 50;
	_attackDamage = 20;
	_health = 100;
	_gardGateMode = false;
	std::cout << "[ ScavTrap ] Default constructor with parameter called" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const &scavTrapCoppy ) : ClapTrap(scavTrapCoppy._name)
{
	std::cout << "[ ScavTrap ] Coppy constructor called" << std::endl;
	*this = scavTrapCoppy;
	return;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &scavTrapCoppy )
{
	std::cout << "[ ScavTrap ] Coppy assigment operator called" << std::endl;
	if ( this != &scavTrapCoppy )
	{
		this->_name = scavTrapCoppy._name;
		this->_attackDamage = scavTrapCoppy._attackDamage;
		this->_energy = scavTrapCoppy._energy;
		this->_health = scavTrapCoppy._health;
		this->_gardGateMode = scavTrapCoppy._gardGateMode;
	}

	return *this;
}

void		ScavTrap::attack( const std::string& target )
{
	if ( _health <= 0 )
	{
		std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
		return;
	}
	if ( _energy == 0 )
	{
		std::cout << "ScavTrap " << _name << " has no energy left!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " 
				<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energy--;

	return;
}

void		ScavTrap::guardGate()
{
	if ( _gardGateMode )
	{
		std::cout << "ScavTrap " << _name << " already guarding the gate" << std::endl;
		return;
	}
	if ( _energy == 0 )
	{
		std::cout << "ScavTrap " << _name << " has no energy to guard" << std::endl;
		return;
	}
	if ( _health <= 0 )
	{
		std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	_gardGateMode = true;
	std::cout << "ScavTrap " << _name << " is placed to guard the gate!" << std::endl;

	return;
}