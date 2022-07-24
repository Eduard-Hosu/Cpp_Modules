/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:57:41 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/24 17:24:54 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ICHARACTER_HPP)
# define ICHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"

class AMateria;

//interface class
class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif // ICHARACTER_HPP
