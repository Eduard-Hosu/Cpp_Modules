/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:21:23 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/08 18:46:14 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Operations.hpp"

int main()
{
	int a = 21;
	int b = 42;

	float x = 21.5f;
	float y = 42.5f;

	//int
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;

	std::cout << "Min of " << a << " and " << b << " is ";
	std::cout << min<int>(a, b) << std::endl;

	std::cout << "before swap: a = " << a << " and b = " << b << std::endl;
	swap<int>(a, b);
	std::cout << "after swap: a = " << a << " and b = " << b << std::endl;

	//float
	std::cout << "Max of " << x << " and " << y << " is ";
	std::cout << max<float>(x, y) << std::endl;

	std::cout << "Min of " << x << " and " << y << " is ";
	std::cout << min<float>(x, y) << std::endl;

	std::cout << "before swap: x = " << x << " and y = " << y << std::endl;
	swap<float>(x, y);
	std::cout << "after swap: x = " << x << " and y = " << y << std::endl;

	return 1;
}
