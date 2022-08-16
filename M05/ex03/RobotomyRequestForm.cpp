/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:34:35 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/01 21:01:56 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : 
	Form(ROBO_FORM_NAME, ROBO_SIGN_GRADE, ROBO_EXEC_GRADE), _target("Random_target")
{
	std::cout << "[RobotomyForm] Default constructor called" << std::endl;

	return;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string target ) :
	Form(ROBO_FORM_NAME, ROBO_SIGN_GRADE, ROBO_EXEC_GRADE), _target(target)
{
	std::cout << "[RobotomyForm] Default constructor with target called" << std::endl;

	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &roboRequestForm ) :
	Form(ROBO_FORM_NAME, ROBO_SIGN_GRADE, ROBO_EXEC_GRADE)
{
	std::cout << " [RobotomyForm] Coppy constructor called" << std::endl;
	*this = roboRequestForm;

	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << " [RobotomyForm] Default destructor called!" << std::endl;

	return;
}

RobotomyRequestForm &			RobotomyRequestForm::operator=( RobotomyRequestForm const &roboRequestForm )
{
	if (this != &roboRequestForm)
		this->_target = roboRequestForm.getTarget();
	std::cout << "[RobotomyForm] Copy assignment operator called" << std::endl;
	
	return *this;
}

std::string						RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void							RobotomyRequestForm::execute( Bureaucrat const &executor ) const
{
	Form::checkIfCanExecute( executor );
	if ( std::rand() % 2 )
		std::cout << "brrrrr drilling noises brrrrrr " << this->_target
		<< " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomized failed for " << this->_target << std::endl;

	return;
}

//CHECK: Other version, mehh
// void							RobotomyRequestForm::checkIfCanExecute( void ) const
// {
// 	if ( std::rand() % 2 )
// 		std::cout << "brrrrr drilling noises brrrrrr " << this->_target
// 		<< " has been robotomized successfully!" << std::endl;
// 	else
// 		std::cout << "Robotomized failed for " << this->_target << std::endl;

// 	return;
// }
