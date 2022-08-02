/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:21:29 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/02 11:31:05 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : 
	Form(FORM_NAME, SIGN_GRADE, EXEC_GRADE), _target("Random_target")
{
	std::cout << "[ShrubberyForm] Default constructor called" << std::endl;

	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) :
	Form(FORM_NAME, SIGN_GRADE, EXEC_GRADE), _target(target)
{
	std::cout << "[ShrubberyForm] Default constructor with target called" << std::endl;

	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &shrCreationForm ) :
	Form(FORM_NAME, SIGN_GRADE, EXEC_GRADE)
{
	std::cout << " [ShrubberyForm] Coppy constructor called" << std::endl;
	*this = shrCreationForm;

	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << " [ShrubberyForm] Default destructor called!" << std::endl;

	return;
}

ShrubberyCreationForm &			ShrubberyCreationForm::operator=( ShrubberyCreationForm const &shrCreationForm )
{
	if (this != &shrCreationForm)
		this->_target = shrCreationForm.getTarget();
	std::cout << "[ShrubberyForm] Copy assignment operator called" << std::endl;
	
	return *this;
}

std::string						ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void							ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
	Form::checkIfCanExecute( executor );
	std::string			newFile = executor.getName() + "ShrubberyCreation";
	std::ofstream		osf( newFile.c_str() );
	if (!osf.is_open())
	{
		std::cout << "Error: Failed to create the new file" << std::endl;
		return;
	}

	osf << "        .-\"-.     " << std::endl;
	osf << "       /  - -\\    " << std::endl;
	osf << "       \\  @ @/    " << std::endl;
	osf << "        (_ <_)    " << std::endl;
	osf << "        _)(`      " << std::endl;
	osf << "    ,_(`_))\\      " << std::endl;
	osf << "     \"-\\)__/      " << std::endl;
	osf << "      __|||__     " << std::endl;
	osf << "     ((__|__))    " << std::endl;
	osf.close();

	return;
}

//CHECK: Other version, mehh
// void							ShrubberyCreationForm::checkIfCanExecute( void ) const
// {
// 	std::string			newFile = this->getTarget() + "ShrubberyCreation";
// 	std::ofstream		osf( newFile.c_str() );
// 	if (!osf.is_open())
// 	{
// 		std::cout << "Error: Failed to create the new file" << std::endl;
// 		return;
// 	}

// 	osf << "ShrubberyCreationForm and some asci tree, just for test" << std::endl;
// 	osf.close();

// 	return;
// }




