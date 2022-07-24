/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:38:25 by ehosu             #+#    #+#             */
/*   Updated: 2022/07/24 19:44:20 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(IMATERIA_SOURCE_HPP)
# define IMATERIA_SOURCE_HPP
# include <iostream>
# include "AMateria.hpp"

//interface class
class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria( AMateria* ) = 0;
		virtual AMateria* createMateria( std::string const & type ) = 0;
};

#endif // IMATERIA_SOURCE_HPP
