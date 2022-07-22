/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:53:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/22 12:08:05 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ANIMAL_HPP)
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string		_type;
	public:
		Animal();
		Animal( std::string type );
		Animal( Animal const &animalCoppy );
		virtual			~Animal();

		Animal &		operator=( Animal const &animalCoppy );

		std::string		getType() const;
		virtual void	makeSound() const;

};

#endif // ANIMAL_HPP
