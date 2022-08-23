/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:16:40 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/19 12:17:41 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	Span sp = Span(3);
	Span sp2 = Span(10);
	Span sp3 = Span(0);

	std::srand(unsigned(std::time(0)));
	std::cout << "*Short vector:*" << std::endl;
	try
	{
		sp.addNumber(1);
		sp.addNumber(34);
		sp.addNumber(12);
		std::cout << "Short span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		sp.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "*Big vector:*" << std::endl;

	try
	{
		sp2.randomVector();
		std::cout << "Short span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
		sp2.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "*Test with no numbers in vector:*" << std::endl;

	try
	{
		std::cout << "Short span: " << sp3.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
		sp3.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 1;
}
