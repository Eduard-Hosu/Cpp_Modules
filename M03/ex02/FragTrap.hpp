/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:08:25 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/20 16:17:45 by ehosu            ###   ########.fr       */
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
		FragTrap( FragTrap const &fragTrapCoppy );
		~FragTrap();

		FragTrap &	operator=( FragTrap const &fragtrapCoppy );
		void		highFivesGuys( void );
};

#endif // FLAG_TRAP_HPP
