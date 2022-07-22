/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:53:15 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/22 13:22:08 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CAT_HPP)
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat( Cat const &catCoppy );
		~Cat();

		Cat &		operator=( Cat const &catCoppy );
		void		makeSound() const;
};

#endif // CAT_HPP
