/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 02:37:01 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/12 15:27:45 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain();
	std::cout << " [Dog] Default constructor called" << std::endl;
	return;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << " [Dog] Destructor called" << std::endl;
	return;
}

Dog::Dog( Dog const &dogCoppy ) : Animal("Dog")
{
	std::cout << " [Dog] Coppy constructor called" << std::endl;
	*this = dogCoppy;

	return;
}

Dog		&Dog::operator=( Dog const &dogCoppy )
{
	std::cout << " [Dog] Coppy assigment operator called" << std::endl;
	if ( this != &dogCoppy )
	{
		this->_type = dogCoppy._type;
		this->_brain = new Brain();
	}
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << " [Dog] Ham! Ham!, Auuuuu" << std::endl;
	return;
}

void			Dog::setIdea( unsigned int idea_index, std::string idea )
{
	if (idea_index < MAX_NUMBER)
		_brain->setIdea(idea_index, idea);
	return;
}

std::string		Dog::getIdea( unsigned int idea_index ) const
{
	if (idea_index < MAX_NUMBER)
		return _brain->getIdea(idea_index);

	return "That specific idea does not exists!";
}