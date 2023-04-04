/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:41:22 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/03 18:54:48 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.hpp"
#include <cstdlib>
#include <iostream>

Base*	generate(void){
	if (rand() % 3 == 0)
		return (new A());
	else if (rand() % 4 == 0)
		return (new B());
	else if (rand() % 5 == 0)
		return (new C());
	else
		return (NULL);
}

void	identify(Base* p){
	A*	a = dynamic_cast<A *>(p);
	B*	b = dynamic_cast<B *>(p);
	C*	c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "The type is A" << std::endl;
	else if (b)
		std::cout << "The type is B" << std::endl;
	else if (c)
		std::cout << "The type is C" << std::endl;
}

void	identify(Base& p){
	try {
		A&	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The type is A" << std::endl;
	}
	catch (std::exception &bc) {  }

	try {
		B&	b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "The type is B" << std::endl;
	}

	catch (std::exception &bc) {  }
	try {
		C&	c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "The type is C" << std::endl;
	}
	catch (std::exception &bc) {  }
}
