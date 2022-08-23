/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:03:26 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/23 16:09:41 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CLAP_TRAP_HPP)
# define CLAP_TRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string		_name;
		int				_health;
		int				_energy;
		int				_attackDamage;
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &clapTrapCopy );
		~ClapTrap( void );

		ClapTrap &		operator=( ClapTrap const &clapTrapCopy );

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif // CLAP_TRAP_HPP
