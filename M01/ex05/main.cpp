/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:38:04 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/29 17:41:24 by ehosu            ###   ########.fr       */
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

	return (0);
}