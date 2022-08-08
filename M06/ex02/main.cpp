/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:40:00 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/08 15:06:59 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *ptrToBase;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		ptrToBase = generate();
		std::cout << "identify pointer: ";
		identify(ptrToBase);
		std::cout << "identify refrence: " << std::endl;
		identify(*ptrToBase);

		delete ptrToBase;
	}

	return 1;
}
