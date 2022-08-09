/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:16:25 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/09 15:55:03 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int				int_array[] = {1, 5, 10, 12, 3};
	int				array_len = 5;

	std::string 	str_array[] = {"ed", "test", "1"};
	int 			str_array_len = 3;

	float			float_array[] = {1.2f, 23.05, 11, 1.03f};
	int 			float_array_len = 4;


	std::cout << "---int---" << std::endl;
	iter(int_array, array_len, printElements<int>);
	iter(int_array, array_len, plusTwo<int>);
	std::cout << "NEW VALUES:" << std::endl;
	iter(int_array, array_len, printElements<int>);

	std::cout << "---string---" << std::endl;
	iter(str_array, str_array_len, printElements<std::string>);

	std::cout << "---float---" << std::endl;
	iter(float_array, float_array_len, printElements<float>);
	iter(float_array, float_array_len, plusTwo<float>);
	std::cout << "NEW VALUES:" << std::endl;
	iter(float_array, float_array_len, printElements<float>);

	return 0;
}
