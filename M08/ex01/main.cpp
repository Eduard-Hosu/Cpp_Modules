/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:16:40 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/15 13:51:40 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	Span sp = Span(3);

	try
	{
		sp.addNumber(1);
		sp.addNumber(34);
		sp.addNumber(12);
		sp.longestSpan();
		std::cout << "Short span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	sp.printVector();
	


	return 1;
}
