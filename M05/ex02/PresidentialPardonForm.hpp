/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:56:36 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/01 21:04:28 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PRESIDENTIAL_PARDON_HPP)
# define PRESIDENTIAL_PARDON_HPP
# include "Form.hpp"
# define PR_SIGN_GRADE 25
# define PR_EXEC_GRADE 5
# define PR_FORM_NAME "PresidentialPardonForm"

class PresidentialPardonForm : public Form
{
private:
	std::string						_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm( const std::string target );
	PresidentialPardonForm( PresidentialPardonForm const &prPardonForm );
	~PresidentialPardonForm();
	
	//operators
	PresidentialPardonForm &			operator=( PresidentialPardonForm const &prPardonForm );

	//setters and getters
	std::string						getTarget() const;

	//member functions
	void							execute( Bureaucrat const &executor ) const;
	// void							checkIfCanExecute() const;
};

#endif // PRESIDENTIAL_PARDON_HPP
