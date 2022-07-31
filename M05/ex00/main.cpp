/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:50:54 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/31 11:11:49 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// Bureaucrat b1("Bob", 12);
		Bureaucrat b2("Bob", -1);

		// std::cout << b1;
		b2.incGrade(2);
		std::cout << b2;
	}
	catch(const Bureaucrat::gradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::gradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
