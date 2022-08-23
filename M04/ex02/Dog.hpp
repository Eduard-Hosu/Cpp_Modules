/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 02:21:41 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(DOG_HPP)
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain			*_brain;
	public:
		Dog();
		Dog( Dog const &dogCopy );
		~Dog();

		Dog &			operator=( Dog const &dogCopy );
		void			makeSound() const;
		void			setIdea( unsigned int idea_index, std::string idea );
		std::string		getIdea( unsigned int idea_index ) const;
};

#endif // DOG_HPP
