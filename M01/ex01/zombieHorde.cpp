/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:37:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/22 19:28:52 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int		i = 0;
	Zombie *zombies = new Zombie[N];

	while (i < N)
	{
		zombies[i].setName( name );
		i++;
	}
	
	return zombies;
}