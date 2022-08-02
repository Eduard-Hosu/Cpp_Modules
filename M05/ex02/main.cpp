/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:50:54 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/02 11:29:09 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Bob", 5);
		Bureaucrat b2("Tomas", 146);
		// Form b1f("formb1f", 140, 140);
		// Form b2f("formb2f", 10, 101);
		ShrubberyCreationForm b1f("home");
		RobotomyRequestForm c28B("room");
		PresidentialPardonForm pr28B("Richy");

		std::cout << b1 << std::endl;
		// std::cout << b1f << std::endl;
		// std::cout << b2f << std::endl;

		std::cout << b2;
		// b1f.beSigned(b1);
		// b1.signForm(b1f);
		// b2.signForm(b2f);

		// bureaucrat.signForm(b1f);
		// b1.signForm(b1f);
		// b1.executeForm(b1f);

		b1.signForm(b1f);
		b1.executeForm(b1f);

		// b1.signForm(pr28B);
		// b1.executeForm(pr28B);

		// b2.signForm(b1f);
		// b2.executeForm(b1f);
		
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
	catch(const Form::FormNotSignedException& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
