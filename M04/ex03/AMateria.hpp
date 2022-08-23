/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:29:54 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(AMATERIA_HPP)
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string		_type;
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( AMateria const &aMateriaCopy );
		virtual	~AMateria();

		AMateria &			operator=( AMateria const &aMateriaCopy );

		std::string const & getType() const; //Returns the materia type
		virtual	AMateria*	clone() const = 0;
		virtual	void 		use( ICharacter& target );
};

#endif // AMATERIA_HPP
