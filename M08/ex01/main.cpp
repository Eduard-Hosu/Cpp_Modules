/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:16:40 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/17 11:24:28 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	Span sp = Span(3);
	Span sp2 = Span(MAX_RANGE);

	std::srand(unsigned(std::time(0)));

	try
	{
		sp.addNumber(1);
		sp.addNumber(34);
		sp.addNumber(12);
		sp.longestSpan();
		std::cout << "Short span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		sp.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Big vector:" << std::endl;

	try
	{
		sp2.randomVector();
		// std::cout << "Short span: " << sp2.shortestSpan() << std::endl;
		// std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
		sp2.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 1;
}
