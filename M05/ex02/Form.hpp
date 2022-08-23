/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:14:32 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:15 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FORM_HPP)
# define FORM_HPP
# include <iostream>
# include <ostream>
// # include <exeption>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string		_name;
		bool					_signed;
		const int				_gradeToSign;
		const int				_gradeToExecute;
	public:
		Form();
		Form( const std::string name, const int gradeToSign, const int gradeToExecute );
		Form( Form const &formCopy );
		virtual ~Form();

		//operators
		Form &					operator=( Form const &formCopy );

		//setters and getters
		const std::string		getName() const;
		int						getGradeToSign() const;
		int						getGradeToExecute() const;
		bool					getSignature() const;

		//member functions
		void					beSigned( Bureaucrat const &burCopy );
		virtual void			execute( Bureaucrat const &executor ) const = 0;
		void					checkIfCanExecute( Bureaucrat const &executor ) const;
		// void					execute( Bureaucrat const &executor ) const;
		// virtual void			checkIfCanExecute() const = 0;

		//nest classes
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

};

std::ostream &					operator<<( std::ostream &COUT, Form const &formCopy );

#endif // FORM_HPP
