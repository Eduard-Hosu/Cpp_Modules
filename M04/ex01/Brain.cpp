/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:31:36 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (unsigned int i = 0; i < MAX_NUMBER; i++)
		_ideas[i] = "No idea";
	std::cout << "[Brain] Default constructor called" << std::endl;

	return;
}

//test this out, is this neceserry
Brain::Brain( std::string type )
{
	type = "Random brain";
	for (size_t i = 0; i < MAX_NUMBER; i++)
		_ideas[i] = "No idea";
	std::cout << "[Brain] Default constructor with parameter called" << std::endl;

	return;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
	return;
}

Brain::Brain( Brain const &brainCopy )
{
	std::cout << " [Brain] Copy constructor called" << std::endl;
	*this = brainCopy;

	return;
}

Brain			&Brain::operator=( Brain const &brainCopy )
{
	if (this != &brainCopy)
	{
		for (unsigned int i = 0; i < MAX_NUMBER; i++)
			_ideas[i] = brainCopy._ideas[i];
	}
	std::cout << " [Brain] Copy assigment operator called" << std::endl;

	return *this;
}


void			Brain::setIdea( unsigned int idea_index, std::string idea )
{
	if (idea_index < MAX_NUMBER)
		_ideas[idea_index] = idea;
	return;
}

std::string		Brain::getIdea( unsigned int idea_index ) const
{
	if (idea_index < MAX_NUMBER)
		return this->_ideas[idea_index];

	return "That specific idea does not exists!";
}
