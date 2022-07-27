/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:38:04 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/26 15:17:35 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	harl.complain( "DEBUG" );
	harl.complain( "INFO" );
	harl.complain( "something, bla bla" );
	harl.complain( "ERROR" );
	harl.complain( "WARNING" );

	return (0);
}