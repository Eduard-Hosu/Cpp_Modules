/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:42:43 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/31 10:54:06 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BUREAUCRAT_HPP)
# define BUREAUCRAT_HPP
# include <iostream>
# include <ostream>
# include <exception>
# include <ctime>
# include <cstdlib>
# define MAX_GRADE 1
# define MIN_GRADE 150

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
		Bureaucrat( Bureaucrat const &bureCoppy );
		~Bureaucrat();

		//operators
		Bureaucrat &		operator=( Bureaucrat const &bureCoppy );

		//seters and getters
		std::string			getName() const;
		int					getGrade() const;
		void				incGrade( const int &grade );
		void				decGrade( const int &grade );
		void				incGrade();
		void				decGrade();

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

std::ostream &		operator<<( std::ostream &COUT, Bureaucrat const &bureCoppy );


#endif // BUREAUCRAT