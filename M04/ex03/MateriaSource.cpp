/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:20:10 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << " [ MateriaSource ] Default constructor called" << std::endl;
	for (unsigned int i = 0; i < MAX_MATERIA; i++)
		_materia[i] = 0;

	return;
}

MateriaSource::~MateriaSource()
{
	std::cout << " [ MateriaSource ] Default destructor called" << std::endl;
	for (unsigned int i = 0; i < MAX_MATERIA; i++)
		if (_materia[i])
			delete	_materia[i];

	return;
}

MateriaSource::MateriaSource( MateriaSource const &materiaSourceCopy )
{
	std::cout << " [ MateriaSource ] Copy constructor called" << std::endl;
	*this = materiaSourceCopy;

	return;
}

MateriaSource		&MateriaSource::operator=( MateriaSource const &materiaSourceCopy )
{
	std::cout << " [MateriaSource] Copy assigment operator called" << std::endl;
	if (this != &materiaSourceCopy)
	{
		for (unsigned int i = 0; i < MAX_MATERIA; i++)
		{
			if (_materia[i])
				delete _materia[i];
			_materia[i] = materiaSourceCopy._materia[i]->clone();
		}
	}

	return *this;
}

void				MateriaSource::learnMateria( AMateria* m)
{
	for (unsigned int i = 0; i < MAX_MATERIA; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			return;
		}
	}

	return;
}

AMateria*			MateriaSource::createMateria( std::string const &type )
{
	for (unsigned int i = 0; i < MAX_MATERIA; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
			return _materia[i]->clone();
	}
	
	return 0;
}