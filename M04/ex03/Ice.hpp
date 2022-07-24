/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:23:06 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/24 19:12:40 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ICE_HPP)
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice( Ice const &iceCoppy );
		~Ice();

		Ice &			operator=( Ice const &iceCoppy );

		AMateria*			clone() const;
		void 				use( ICharacter& target );
};

#endif // ICE_HPP
