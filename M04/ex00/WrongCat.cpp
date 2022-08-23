/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:23:14 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat")
{
	std::cout << " [WrongAnimal] Default constructor called" << std::endl;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << " [WrongCat] Destructor was call" << std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const &wrogCatCopy ) : WrongAnimal("Wrong Cat")
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	*this = wrogCatCopy;
	return;
}

WrongCat			&WrongCat::operator=( WrongCat const &wrongCatCopy )
{
	std::cout << " [WrongCat] Copy assigment operator called" << std::endl;
	if ( this != &wrongCatCopy )
		this->_type = wrongCatCopy._type;

	return *this;
}

void				WrongCat::makeSound( void ) const
{
	std::cout << "[WrongCat] Evil Meauuuu!" << std::endl;
	return;
}