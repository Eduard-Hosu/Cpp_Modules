/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:35:52 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/01 21:03:11 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
	_name("No name"), _signed(false),
	_gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "[Form] Default constructor called" << std::endl;

	return;
}

Form::Form( const std::string name, const int gradeToSign, const int gradeToExecute ) :
	_name(name), _signed(false),
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < MAX_GRADE || _gradeToExecute < MAX_GRADE)
		throw GradeTooHighException();
	if (_gradeToSign > MIN_GRADE || _gradeToExecute > MIN_GRADE)
		throw GradeTooLowException();
	std::cout << "[From] Default constructor called with all variables assigned" << std::endl;

	return;
}

Form::~Form()
{
	std::cout << " [Form] Default destructor called!" << std::endl;

	return;
}

Form::Form( Form const &formCoppy ) :
	_name(formCoppy.getName()), _signed(formCoppy.getSignature()),
	_gradeToSign(formCoppy.getGradeToSign()), _gradeToExecute(formCoppy.getGradeToExecute())
{
	*this = formCoppy;
	std::cout << " [Form] Coppy constructor called" << std::endl;

	return;
}

Form &						Form::operator=( Form const &formCoppy )
{
	if ( this != &formCoppy )
		this->_signed = formCoppy.getSignature();
	std::cout << "[Form] Copy assignment operator called" << std::endl;

	return *this;
}

const std::string					Form::getName() const
{
	return this->_name;
}

int							Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int							Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

bool						Form::getSignature() const
{
	return this->_signed;
}

void						Form::beSigned( Bureaucrat const &burCoppy )
{
	if (burCoppy.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_signed = true;

	return;
}

const char*					Form::GradeTooHighException::what() const throw()
{
	return ("Grade is to high!");
}

const char*					Form::GradeTooLowException::what() const throw()
{
	return ("Grade is to low!");
}

const char*					Form::FormNotSignedException::what() const throw()
{
	return ("The form is not signed!");
}

std::ostream &				operator<<( std::ostream &COUT, Form const &formCoppy )
{
	COUT << "Form name is " << formCoppy.getName()
			<< " * Grade to sign is " << formCoppy.getGradeToSign()
			<< " * Grade to execute is " << formCoppy.getGradeToExecute() << std::endl;
	if (formCoppy.getSignature())
		COUT << "Form is signed!" << std::endl;
	else
		COUT << "Form is not signed!" << std::endl;

	return COUT;
}

void						Form::checkIfCanExecute( Bureaucrat const &executor ) const
{
	if (executor.getGrade() > this->getGradeToExecute() )
		throw GradeTooLowException();
	if (!this->getSignature())
		throw FormNotSignedException();
	// execute( executor );

	return;
}

//CHECK: Other version, mehhh
// void						Form::execute( Bureaucrat const &executor ) const
// {
// 	if (executor.getGrade() > this->getGradeToExecute() )
// 		throw GradeTooLowException();
// 	if (!this->getSignature())
// 		throw FormNotSignedException();
// 	checkIfCanExecute();

// 	return;
// }
