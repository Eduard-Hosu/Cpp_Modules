/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:53:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
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
		Animal( Animal const &animalCopy );
		virtual			~Animal();

		Animal &		operator=( Animal const &animalCopy );

		std::string		getType() const;
		virtual void	makeSound() const;

};

#endif // ANIMAL_HPP
