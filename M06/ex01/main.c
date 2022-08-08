/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:19:53 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/05 16:11:49 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PersonalData.hpp"

int main()
{
	Data *			Person = new Data;
	uintptr_t 		raw;

	Person->first_name = "Alex";
	Person->last_name = "Green";
	Person->age = 27;
	Person->kg = 70.2;

	std::cout << Person->first_name << std::endl;
	std::cout << Person->age << std::endl;
	std::cout << Person->kg << std::endl;

	std::cout << "Pointer to data: " << Person << std::endl;

	raw = serialize(Person);
	std::cout << "Raw data: " << raw << std::endl;
	Data *samePerson = deserialize(raw);

	std::cout << samePerson->first_name << std::endl;
	std::cout << samePerson->age << std::endl;
	std::cout << samePerson->kg << std::endl;

	return 1;
}
