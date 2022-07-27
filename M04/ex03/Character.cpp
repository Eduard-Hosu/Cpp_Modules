/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:36:02 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/27 11:41:48 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("No_name")
{
	std::cout << " [No_name] Default constructor called" << std::endl;
	for (unsigned int i = 0; i < MAX_SLOTS; i++)
		_inv[i] = 0;

	return;
}

Character::Character( std::string name ) : _name(name)
{
	std::cout << " [Character] Default constructor with parameter called" << std::endl;
	for (unsigned int i = 0; i < MAX_SLOTS; i++)
		_inv[i] = 0;

	return;
}

Character::~Character()
{
	std::cout << " [Character] Destructor called" << std::endl;
	for (unsigned int i = 0; i < MAX_SLOTS; i++)
		if (_inv[i])
			delete _inv[i];

	return;
}

Character::Character( Character const &characterCoppy )
{
	std::cout << " [Character] Coppy constructor called" << std::endl;
	*this = characterCoppy;

	return;
}

Character			&Character::operator=( Character const &characterCoppy )
{
	std::cout << " [Character] Coppy assigment operator called" << std::endl;
	if (this != &characterCoppy)
	{
		_name = characterCoppy._name;
		for (unsigned int i = 0; i < MAX_SLOTS; i++)
		{
			//delete materia first if exists
			if (_inv[i])
				delete _inv[i];
			//clone the materia in the new slot
			_inv[i] = characterCoppy._inv[i]->clone();
		}
	}

	return *this;
}

std::string const	&Character::getName() const
{
	return this->_name;
}

void				Character::equip( AMateria* m )
{
	for (unsigned int i = 0; i < MAX_SLOTS; i++)
	{
		if (!_inv[i])
		{
			_inv[i] = m;
			return;
		}
	}

	std::cout << " [Character] Your inventory is full!" << std::endl;
	return;
}

void				Character::unequip( int idx )
{
	if ( idx >= 0 || idx < MAX_SLOTS )
		_inv[idx] = 0;

	return;
}


void				Character::use( int idx, ICharacter& targer )
{
	if ( idx >= 0 || idx < MAX_SLOTS )
		_inv[idx]->use(targer);

	return;
}
