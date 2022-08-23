/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:41:29 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(WRONG_ANIMAL_HPP)
# define WRONG_ANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string		_type;
		
	public:
		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const &wrongAnimalCopy );
		virtual				~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const &wrongAnimalCopy );
		std::string			getType() const;
		virtual void		makeSound() const;
};

#endif // WRONG_ANIMAL_HPP
