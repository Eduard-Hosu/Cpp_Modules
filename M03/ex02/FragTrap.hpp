/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:08:25 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:41 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FLAG_TRAP_HPP)
# define FLAG_TRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( FragTrap const &fragTrapCopy );
		~FragTrap();

		FragTrap &	operator=( FragTrap const &fragtrapCopy );
		void		highFivesGuys( void );
};

#endif // FLAG_TRAP_HPP
