/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:52:28 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/30 11:47:25 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("No_name")
{
	//true random grade
	std::srand(time(0));
	_grade = std::rand() % 150 + 1;
	std::cout << "[Bureaucrat] Default constructor called" << std::endl;

	return;
}

Bureaucrat::Bureaucrat( const std::string name ) : _name(name)
{
	//true random grade
	std::srand(time(0));
	_grade = std::rand() % 150 + 1;
	std::cout << "[Bureaucrat] Default constructor called with name " << std::endl;

	return;
}

Bureaucrat::Bureaucrat( const int grade ) : _name("No_name")
{
	std::cout << " [Bureaucrat] Default constructor called with grade" << std::endl;
	if (grade > MIN_GRADE)
	{
		throw Bureaucrat::gradeTooLowException();
	} else if (grade < MAX_GRADE)
	{
		throw Bureaucrat::gradeTooHighException();
	}
	_grade = grade;

	return;
}

Bureaucrat::Bureaucrat( const std::string name, const int grade ) : _name(name)
{
	std::cout << " [Bureaucrat] Default constructor called with grade and name" << std::endl;
	if (grade > MIN_GRADE)
	{
		throw Bureaucrat::gradeTooLowException();
	} else if (grade < MAX_GRADE)
	{
		throw Bureaucrat::gradeTooHighException();
	}
	_grade = grade;

	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const &bureCoppy )
{
	*this = bureCoppy;
	std::cout << " [Bureaucrat] Coppy constructor called" << std::endl;
	
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << " [Bureaucrat] Default destructor called!" << std::endl;

	return;
}

std::string			Bureaucrat::getName() const
{
	return this->_name;
}

int					Bureaucrat::getGrade() const
{
	return this->_grade;
}

void				Bureaucrat::incGrade( int const &grade )
{
	if ( _grade - grade < MAX_GRADE )
		throw gradeTooHighException();

	return;
}

void				Bureaucrat::decGrade( int const &grade )
{
	if ( _grade + grade > MIN_GRADE )
		throw gradeTooLowException();
	
	return;
}

void				Bureaucrat::decGrade()
{
	Bureaucrat::decGrade(1);

	return;
}

void				Bureaucrat::incGrade()
{
	Bureaucrat::incGrade(1);

	return;
}

Bureaucrat			&Bureaucrat::operator=( Bureaucrat const &bureCoppy )
{
	if ( this != &bureCoppy )
	{
		// this->_name = bureCoppy._name;
		this->_grade = bureCoppy._grade;
	}
	
	return *this;
}

std::ostream		&operator<<( std::ostream &COUT, Bureaucrat const &bureCoppy )
{
	if (bureCoppy.getGrade() > MIN_GRADE)
	{
		throw Bureaucrat::gradeTooLowException();
	} else if (bureCoppy.getGrade() < MAX_GRADE)
	{
		throw Bureaucrat::gradeTooHighException();
	}
	COUT << "Bureaucrat " << "name is " << bureCoppy.getName() << " and the grade is " << bureCoppy.getGrade() << std::endl;

	return COUT;
}

const char* 		Bureaucrat::gradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* 		Bureaucrat::gradeTooLowException::what() const throw()
{
	return ("Grade is too high!");
}