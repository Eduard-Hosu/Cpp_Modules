/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:56:46 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/22 19:36:55 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZPMBIE_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
	private:
		std::string  _name;
	public:
		Zombie();
		~Zombie();
		void		setName( std::string name );
		void		announce( void );
};

Zombie*	zombieHorde( int N, std::string name );

#endif