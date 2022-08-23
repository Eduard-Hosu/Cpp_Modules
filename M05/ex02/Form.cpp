/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:35:52 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:15 by ehosu            ###   ########.fr       */
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
	std::cout << "[Form] Default constructor called with all variables assigned" << std::endl;

	return;
}

Form::~Form()
{
	std::cout << " [Form] Default destructor called!" << std::endl;

	return;
}

Form::Form( Form const &formCopy ) :
	_name(formCopy.getName()), _signed(formCopy.getSignature()),
	_gradeToSign(formCopy.getGradeToSign()), _gradeToExecute(formCopy.getGradeToExecute())
{
	std::cout << " [Form] Copy constructor called" << std::endl;

	return;
}

Form &						Form::operator=( Form const &formCopy )
{
	if ( this != &formCopy )
		this->_signed = formCopy.getSignature();
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

void						Form::beSigned( Bureaucrat const &burCopy )
{
	if (burCopy.getGrade() > this->_gradeToSign)
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

std::ostream &				operator<<( std::ostream &COUT, Form const &formCopy )
{
	COUT << "Form name is " << formCopy.getName()
			<< " * Grade to sign is " << formCopy.getGradeToSign()
			<< " * Grade to execute is " << formCopy.getGradeToExecute() << std::endl;
	if (formCopy.getSignature())
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
