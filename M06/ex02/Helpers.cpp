/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:00:16 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/08 15:08:42 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *			generate(void)
{
	unsigned int		random;
	
	random = std::rand() % 3;

	switch (random)
	{
		case 0:
			std::cout << "Class A" << std::endl;
			return new A();
		case 1:
			std::cout << "Class B" << std::endl;
			return new B();
		default:
			std::cout << "Class C" << std::endl;
			return new C();
	}

	return (NULL);
}


void		identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown object type!" << std::endl;
	
	return;
}

void		identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "it's A" << std::endl;
		return;
	}
	catch(std::exception& e)
	{
		std::cerr << "it's not A, " << e.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "it's B" << std::endl;
		return;
	}
	catch(std::exception& e)
	{
		std::cerr << "it's not B, " << e.what() << std::endl;
	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "it's C" << std::endl;
		return;
	}
	catch(std::exception& e)
	{
		std::cerr << "it's not C, " << e.what() << std::endl;
	}
	std::cout << "Unknown error!" << std::endl;

	return;
}
