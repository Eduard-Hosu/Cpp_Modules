/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:44:15 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:15 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	return;
}

Intern::~Intern()
{
	return;
}

Intern::Intern( Intern const &internCopy )
{
	*this = internCopy;

	return;
}

Intern &		Intern::operator=( Intern const &internCopy )
{
	if (this == &internCopy)
		return *this;
	this->~Intern();
	new (this) Intern(internCopy);

	return *this;
}

Form*			Intern::makeForm( const std::string &formName, const std::string &formTarget )
{
	Form*				newForm = NULL;
	std::string const	formList[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int					thisForm = -1;

	for (unsigned int i = 0; i < 3; i++)
	{
		if (formName == formList[i])
		{
			thisForm = i;
			break;
		}
	}
	
	switch (thisForm)
	{
		case 0:
			newForm = new ShrubberyCreationForm(formTarget);
			std::cout << "Intern made a Shrubbery creation form" << std::endl;
			break;
		case 1:
			newForm = new RobotomyRequestForm(formTarget);
			std::cout << "Intern made a Robotomy request form" << std::endl;
			break;
		case 2:
			newForm = new PresidentialPardonForm(formTarget);
			std::cout << "Intern made a Presidential pardon form" << std::endl;
			break;
		
		default:
			std::cout << "Intern couldn't' make de form" << std::endl;
			break;
	}
	
	return newForm;
}
