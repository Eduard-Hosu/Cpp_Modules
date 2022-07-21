/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:53:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/21 18:45:34 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ANIMAL)
# define ANIMAL
# include <iostream>
# include <string>

class Animal
{
	private:
		std::string		_type;
	public:
		Animal();
		Animal( std::string type );
		Animal( Animal const &animalCoppy );
		~Animal();

		Animal &		operator=( Animal const &animalCoppy );

		std::string		getType() const;
		// std::string		setType();
		virtual void	makeSound() const;

};

#endif // ANIMAL
