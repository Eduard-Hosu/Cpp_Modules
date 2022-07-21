/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:19:36 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/19 18:28:32 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap first("Cicero");
	ScavTrap second;

	std::cout << std::endl << "*** first ***" << std::endl;
	first.attack("My neighbor");
	first.beRepaired(5);
	first.takeDamage(4);
	first.takeDamage(47);
	first.attack("My dog");
	first.beRepaired(10);
	first.takeDamage(100);
	first.guardGate();

	std::cout << std::endl << "*** second ***" << std::endl;
	second.attack("Bot");
	second.takeDamage(10);
	second.beRepaired(2);
	second.takeDamage(1000);
	second.guardGate();

	return 0;
}
