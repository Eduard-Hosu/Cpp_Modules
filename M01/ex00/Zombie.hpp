/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:56:46 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/28 17:19:31 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
	private:
		std::string  _name;
	public:
		Zombie( std::string name );
		~Zombie();
		void			announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif