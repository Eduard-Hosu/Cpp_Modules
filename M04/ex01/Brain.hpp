/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:20:41 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 14:52:50 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BRAIN_HPP)
# define BRAIN_HPP
# include <iostream>
# define MAX_NUMBER 100

class Brain
{
	private:
		std::string		_ideas[MAX_NUMBER];
	public:
		Brain();
		Brain( std::string type );
		Brain( Brain const &brainCoppy );
		~Brain();

	Brain &				operator=( Brain const &brainCoppy );
	void				setIdea( unsigned int idea_index, std::string idea );
	std::string			getIdea( unsigned int idea_index ) const;
	
};

#endif // BRAIN_HPP
