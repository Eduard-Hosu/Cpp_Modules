/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:52:20 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/29 17:40:04 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl 
				<< "I really do!" << std::endl;
	return;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."  << std::endl 
				<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl
				<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

	return;
}

void	Harl::complain( std::string level )
{
	std::string	complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			index = -1;
	void		(Harl::*complain_responces[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for ( size_t i = 0; i < sizeof(complains) / sizeof(std::string) ; i++ )
	{
		if ( complains[i] == level )
			index = i;
	}

	if ( index == -1 )
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}

	(this->*complain_responces[index])();
	return;
}
