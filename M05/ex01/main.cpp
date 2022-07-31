/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:50:54 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/31 15:31:17 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Bob", 120);
		Bureaucrat b2("Bob", 100);
		Form b1f("formb1f", 140, 140);
		Form b2f("formb2f", 10, 101);

		std::cout << b1 << std::endl;
		std::cout << b1f << std::endl;
		std::cout << b2f << std::endl;

		std::cout << b1;
		b1f.beSigned(b1);
		b1.signForm(b1f);
		b2.signForm(b2f);
		
		// std::cout << b2;

	}
	catch(const Bureaucrat::gradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::gradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
