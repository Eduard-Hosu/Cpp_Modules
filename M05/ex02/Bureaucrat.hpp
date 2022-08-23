/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:42:43 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:15 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BUREAUCRAT_HPP)
# define BUREAUCRAT_HPP
# include <iostream>
# include <ostream>
# include <exception>
# include <ctime>
# include <cstdlib>
# include "Form.hpp"
# define MAX_GRADE 1
# define MIN_GRADE 150

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		void				_checkGrade() const;
	public:
		Bureaucrat();
		Bureaucrat( const std::string name );
		Bureaucrat( const std::string name, const int grade );
		Bureaucrat( const int grade );
		Bureaucrat( Bureaucrat const &bureCopy );
		~Bureaucrat();

		//operators
		Bureaucrat &		operator=( Bureaucrat const &bureCopy );

		//setters and getters
		std::string			getName() const;
		int					getGrade() const;
		void				incGrade( const int &grade );
		void				decGrade( const int &grade );
		void				incGrade();
		void				decGrade();

		//member functions
		void				signForm( Form &formCopy ) const;
		void				executeForm(Form const & form);

		//nest classes
		class gradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class gradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream &		operator<<( std::ostream &COUT, Bureaucrat const &bureCopy );


#endif // BUREAUCRAT
