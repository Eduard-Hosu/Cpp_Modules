/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:20:32 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/08 13:53:36 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("No_name"), _health(10),
	_energy(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string name ) :
	_name(name), _health(10),
	_energy(10), _attackDamage(0)
{
	std::cout << "Default constructor with parameter called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const &clapTrapCoppy )
{
	std::cout << "Coppy constructor called" << std::endl;
	*this = clapTrapCoppy;
	return;
}


ClapTrap	&ClapTrap::operator=( ClapTrap const &clapTrapCoppy )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &clapTrapCoppy )
	{
		this->_name = clapTrapCoppy._name;
		this->_attackDamage = clapTrapCoppy._attackDamage;
		this->_energy = clapTrapCoppy._energy;
		this->_health = clapTrapCoppy._health;
	}
	
	return *this;
}

void		ClapTrap::attack(const std::string& target)
{
	if ( _health == 0 )
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	if ( _energy == 0 )
	{
		std::cout << "ClapTrap " << _name << " has no energy left!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " 
				<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energy--;

	return;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	if ( _health == 0 )
	{
		std::cout << "ClapTrap " << _name << " is dead! Can't take more damage" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << ", damage. ";
	_health -= amount;
	if ( _health <= 0 )
	{
		std::cout << "Unfortunately, the damage taken was fatal!" << std::endl;
		return;
	}
	std::cout << "Has only "<< _health << " left!" << std::endl;

	return;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	if ( _health == 0 )
	{
		std::cout << "ClapTrap " << _name << " is dead! Can't be resurrected..." << std::endl;
		return;
	}
	if ( _energy == 0 )
	{
		std::cout << "ClapTrap " << _name << " has no energy left.." << std::endl;
		return;
	}
	_health += amount;
	_energy--;

	std::cout << "ClapTrap " << _name << " repaired himself with "<< amount 
				<< " . This is the new health points " << _health << std::endl;
	
	return;
}

