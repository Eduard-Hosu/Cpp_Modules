/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:01:46 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:15 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : 
	Form(PR_FORM_NAME, PR_SIGN_GRADE, PR_EXEC_GRADE), _target("Random_target")
{
	std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;

	return;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string target ) :
	Form(PR_FORM_NAME, PR_SIGN_GRADE, PR_EXEC_GRADE), _target(target)
{
	std::cout << "[PresidentialPardonForm] Default constructor with target called" << std::endl;

	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &prPardonForm ) :
	Form(PR_FORM_NAME, PR_SIGN_GRADE, PR_EXEC_GRADE)
{
	std::cout << " [PresidentialPardonForm] Copy constructor called" << std::endl;
	*this = prPardonForm;

	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << " [PresidentialPardonForm] Default destructor called!" << std::endl;

	return;
}

PresidentialPardonForm &			PresidentialPardonForm::operator=( PresidentialPardonForm const &prPardonForm )
{
	if (this != &prPardonForm)
		this->_target = prPardonForm.getTarget();
	std::cout << "[PresidentialPardonForm] Copy assignment operator called" << std::endl;
	
	return *this;
}

std::string						PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

void							PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
	Form::checkIfCanExecute( executor );
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;

	return;
}

//CHECK: Other version, mehh
// void							PresidentialPardonForm::checkIfCanExecute( void ) const
// {
// 	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;

// 	return;
// }