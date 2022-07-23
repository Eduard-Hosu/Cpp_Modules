/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:13:40 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/23 08:48:54 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(WRONG_CAT_HPP)
# define WRONG_CAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat( WrongCat const &wrongCatCoppy );

		WrongCat &		operator=( WrongCat const &wrongCatCoppy );
		void			makeSound() const;
};

#endif // WRONG_CAT_HPP
