/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:23:59 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/22 19:31:49 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int		i = 0;
	Zombie* zombies = zombieHorde( 3, "zombie_horde");

	while (i < 3)
	{
		zombies[1].announce();
		i++;
	}
	
	delete [] zombies;

	return(0);
}