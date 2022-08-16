/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:32:13 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/02 11:29:50 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SHRUBBERY_CREATION_FROM_HPP)
# define SHRUBBERY_CREATION_FROM_HPP
# include "Form.hpp"
# include <fstream>
// # include <sstream>
# define SIGN_GRADE 145
# define EXEC_GRADE 137
# define FORM_NAME "ShrubberyCreationForm"

class ShrubberyCreationForm : public Form
{
	private:
		std::string						_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &shrCreationForm );
		~ShrubberyCreationForm();

		//operators
		ShrubberyCreationForm &			operator=( ShrubberyCreationForm const &shrCreationForm );

		//setters and getters
		std::string						getTarget() const;

		//member functions
		void							execute( Bureaucrat const &executor ) const;
		// void							checkIfCanExecute() const;
};

#endif // SHRUBBERY_CREATION_FROM_HPP
