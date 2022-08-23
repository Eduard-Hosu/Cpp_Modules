/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:29:15 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/19 16:56:29 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MUTANT_STACK_HPP)
# define MUTANT_STACK_HPP
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;

		MutantStack(){}
		MutantStack( const MutantStack &mutantStackCopy ) : std::stack<T>(mutantStackCopy)
		{
			*this = mutantStackCopy;
			return;
		}
		~MutantStack(){}

		//overloads
		MutantStack &		operator=( const MutantStack &mutantStackCopy )
		{
			if (this != &mutantStackCopy)
				this->c = mutantStackCopy.c;
			return *this;
		}

		iterator begin(){ return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }

		reverse_iterator rbegin(){ return std::stack<T>::c.rbegin(); }
		reverse_iterator rend(){ return std::stack<T>::c.rend(); }
};

#endif // MUTANT_STACK_HPP
