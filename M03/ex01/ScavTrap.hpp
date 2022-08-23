/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:03:48 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:41 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SCAV_TRAP_HPP)
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
	private:
		bool		_gardGateMode;
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &scavTrapCopy );
		~ScavTrap();

		ScavTrap &	operator=( ScavTrap const &scavTrapCopy );
		void		guardGate();
		void		attack( const std::string& target );

};

#endif // SCAV_TRAP_HPP
