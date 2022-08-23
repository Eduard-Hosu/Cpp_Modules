/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:18:26 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:10:15 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(INTERN_HPP)
# define INTERN_HPP
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( Intern const &internCopy );
		~Intern();

		Intern &	operator=( Intern const &internCopy );

		Form *		makeForm(const std::string &formName, const std::string &formTarget);
	
	};

#endif // INTERN_HPP
