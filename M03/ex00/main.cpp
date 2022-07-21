/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:33:22 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/19 16:21:42 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap first("Cicero");
	ClapTrap second;

	std::cout << std::endl << "*** first ***" << std::endl;
	first.attack("My neighbor");
	first.beRepaired(5);
	first.takeDamage(4);
	first.takeDamage(47);
	first.attack("My dog");
	first.beRepaired(10);
	first.takeDamage(50);

	std::cout << std::endl << "*** second ***" << std::endl;
	second.attack("Bot");
	second.takeDamage(10);
	second.beRepaired(2);
	second.takeDamage(3);

	return(0);
}