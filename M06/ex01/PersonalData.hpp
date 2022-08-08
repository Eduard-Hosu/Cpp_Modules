/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PersonalData.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:21:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/05 13:06:21 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PERSONAL_DATA_HPP)
# define PERSONAL_DATA_HPP
# include <iostream>
# include <stdint.h>
# include <string>

typedef	struct s_Data
{
	std::string		first_name;
	std::string		last_name;
	unsigned int	age;
	float			kg;
}				Data;

//fucntions
uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

#endif // PERSONAL_DATA_HPP
