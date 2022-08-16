/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:50:54 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/16 12:48:23 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{

	Intern			someRandomIntern;
	Bureaucrat		b1("Bob", 5);

	Form* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Form* rrf2 = someRandomIntern.makeForm("shrubbery creation", "Shruder");
	Form* rrf3 = someRandomIntern.makeForm("presidential pardon", "Preuder");

	//invalid form exemple
	Form* rrf4 = someRandomIntern.makeForm("test invalid request", "TestInv");

	try
	{
		b1.signForm(rrf);
		b1.signForm(rrf2);
		b1.signForm(rrf3);

		//test with invalid form
		b1.signForm(rrf4);
	
		b1.executeForm(rrf);
		b1.executeForm(rrf2);
		b1.executeForm(rrf3);

		//test with invalid form
		b1.executeForm(rrf4);

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

	delete rrf;
	delete rrf2;
	delete rrf3;

	return 0;
}
