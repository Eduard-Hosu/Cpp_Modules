/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:19:36 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/20 17:01:11 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap first("Cicero");
	FragTrap second;

	std::cout << std::endl << "*** first ***" << std::endl;
	first.attack("My neighbor");
	first.beRepaired(5);
	first.takeDamage(4);
	first.takeDamage(47);
	first.attack("My dog");
	first.beRepaired(10);
	first.takeDamage(30);
	first.highFivesGuys();

	std::cout << std::endl << "*** second ***" << std::endl;
	second.attack("Bot");
	second.takeDamage(10);
	second.beRepaired(2);
	second.takeDamage(100);
	second.highFivesGuys();

	return 0;
}
