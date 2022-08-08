/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:41:24 by ehosu             #+#    #+#             */
/*   Updated: 2022/08/08 15:01:53 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BASE_HPP)
# define BASE_HPP
# include <iostream>
# include <cstdlib>
# include <exception>
# include <ctime>
# include <cstdlib>

class Base
{ public: virtual ~Base( void ) {} };

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *		generate(void);
void		identify(Base* p);
void		identify(Base& p);

#endif // BASE_HPP
