/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:19:58 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CHARACTER_HPP)
# define CHARACTER_HPP
# include "ICharacter.hpp"
# define MAX_SLOTS 4

class Character : public ICharacter
{
	private:
		std::string			_name;
		AMateria*			_inv[MAX_SLOTS];
	public:
		Character();
		Character( std::string name );
		Character( Character const &characterCopy );
		~Character();

		Character &			operator=( Character const &characterCopy );
	
		std::string const 	&getName() const;

		void				equip( AMateria* m );
		void				unequip( int idx );
		void 				use(int idx, ICharacter& target);
	};

#endif // CHARACTER_HPP
