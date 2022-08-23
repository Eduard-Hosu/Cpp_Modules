/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:18:55 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:41 by ehosu            ###   ########.fr       */
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

ScavTrap::ScavTrap( ScavTrap const &scavTrapCopy ) : ClapTrap(scavTrapCopy._name)
{
	std::cout << "[ ScavTrap ] Copy constructor called" << std::endl;
	*this = scavTrapCopy;
	return;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &scavTrapCopy )
{
	std::cout << "[ ScavTrap ] Copy assigment operator called" << std::endl;
	if ( this != &scavTrapCopy )
	{
		this->_name = scavTrapCopy._name;
		this->_attackDamage = scavTrapCopy._attackDamage;
		this->_energy = scavTrapCopy._energy;
		this->_health = scavTrapCopy._health;
		this->_gardGateMode = scavTrapCopy._gardGateMode;
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