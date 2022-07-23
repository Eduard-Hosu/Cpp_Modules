/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:23:14 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 08:36:58 by ehosu            ###   ########.fr       */
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

WrongCat::WrongCat( WrongCat const &wrogCatCoppy ) : WrongAnimal("Wrong Cat")
{
	std::cout << "[WrongCat] Coppy constructor called" << std::endl;
	*this = wrogCatCoppy;
	return;
}

WrongCat			&WrongCat::operator=( WrongCat const &wrongCatCoppy )
{
	std::cout << " [WrongCat] Coppy assigment operator called" << std::endl;
	if ( this != &wrongCatCoppy )
		this->_type = wrongCatCoppy._type;

	return *this;
}

void				WrongCat::makeSound( void ) const
{
	std::cout << "[WrongCat] Evil Meauuuu!" << std::endl;
	return;
}