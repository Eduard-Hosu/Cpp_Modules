/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:23:59 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/22 10:48:47 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie* zombie_1 = newZombie("zombie_1");

	zombie_1->announce();
	delete zombie_1;
	randomChump("zombie_2");

	return(0);
}