/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:56:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/14 12:07:52 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int>		int_vector(MAX_NUMB);
	std::list<int>			int_list(MAX_NUMB);
	int						find_this = 10;

	std::srand(unsigned(std::time(0)));

	//generate random container components
	std::generate(int_vector.begin(), int_vector.end(), randomNumb);
	std::generate(int_list.begin(), int_list.end(), randomNumb);

	std::cout << "Vector random components:" << std::endl;
	for (std::vector<int>::iterator it = int_vector.begin(); it!=int_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	std::cout << "List random components:" << std::endl;
	for (std::list<int>::iterator it = int_list.begin(); it!=int_list.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	std::cout << "Find a magic number: " << find_this << std::endl;
	try
	{
		std::vector<int>::iterator itr_vector = easyfind(int_vector, find_this);
		std::cout << "The magic number is in vector: " << *itr_vector << std::endl;

		std::list<int>::iterator itr_list = easyfind(int_list, find_this);
		std::cout << "The magic number is in list: " << *itr_list << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 1;
}
