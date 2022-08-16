/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:47:11 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/01 21:02:06 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ROBOTOMY_REQUEST_FORM_HPP)
# define ROBOTOMY_REQUEST_FORM_HPP
# include "Form.hpp"
# define ROBO_SIGN_GRADE 72
# define ROBO_EXEC_GRADE 45
# define ROBO_FORM_NAME "RobotomyRequestForm"

class RobotomyRequestForm : public Form
{
private:
	std::string						_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm( const std::string target );
	RobotomyRequestForm( RobotomyRequestForm const &roboRequestForm );
	~RobotomyRequestForm();

	//operators
	RobotomyRequestForm &			operator=( RobotomyRequestForm const &roboRequestForm );

	//setters and getters
	std::string						getTarget() const;

	//member functions
	void							execute( Bureaucrat const &executor ) const;
	// void							checkIfCanExecute() const;
};


#endif // ROBOTOMY_REQUEST_FORM_HPP
