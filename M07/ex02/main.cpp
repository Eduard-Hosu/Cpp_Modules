/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:38:21 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/11 13:11:51 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "here we go!" << std::endl;

	Array<int>			example(5);
	Array<int>			test_array(5);
	int					rand_value;

	std::cout << "size of array: " << example.size() << std::endl;
	std::srand(time(0));
	for (unsigned int i = 0; i < example.size(); i++)
	{
		rand_value = std::rand() % 200;
		example[i] = rand_value;
	}

	for (unsigned int i = 0; i < test_array.size(); i++)
	{
		rand_value = std::rand() % 200;
		test_array[i] = rand_value;
	}

	std::cout << "Check example content" << std::endl;
	for (unsigned int i = 0; i < example.size(); i++)
		std::cout << example[i] << std::endl;

	std::cout << "Check test_array content" << std::endl;
	for (unsigned int i = 0; i < test_array.size(); i++)
		std::cout << test_array[i] << std::endl;

	try
	{
		std::cout << example[17] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << example[1] << std::endl;
		std::cout << example[-2] << std::endl;
	}
	catch(const Array<int>::outOfBoundsException& e)
	{
		std::cerr << e.what() << '\n';
	}
	//Try coppy constructor
	std::cout << "Check new test_array content" << std::endl;

	Array<int> test = example;
	test_array = test;

	for (unsigned int i = 0; i < test_array.size(); i++)
		std::cout << test_array[i] << std::endl;
	
	return 0;
}
