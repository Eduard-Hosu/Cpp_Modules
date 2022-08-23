/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:27:57 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/19 16:54:36 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	//next mutant stack
	std::cout << "next mutant stack " << std::endl;

	MutantStack<int> next_mStack;
	next_mStack.push(10);
	next_mStack.push(9);
	std::cout << next_mStack.top() << std::endl;
	next_mStack.pop();
	std::cout << next_mStack.size() << std::endl;
	next_mStack.push(8);
	next_mStack.push(7);
	next_mStack.push(6);
	next_mStack.push(0);
	

	MutantStack<int>::reverse_iterator rit_n = next_mStack.rbegin();
	MutantStack<int>::reverse_iterator rite_n = next_mStack.rend();

	for (; rit_n != rite_n; ++rit_n)
		std::cout << ' ' << *rit_n;
	std::cout << std::endl;

	std::cout << "copy mutant stack " << std::endl;
	MutantStack<int> new_next_mStack = next_mStack;
	MutantStack<int>::reverse_iterator rit = new_next_mStack.rbegin();
	MutantStack<int>::reverse_iterator rite = new_next_mStack.rend();

	for (; rit != rite; ++rit)
		std::cout << ' ' << *rit;
	std::cout << std::endl;

	return 0;
}