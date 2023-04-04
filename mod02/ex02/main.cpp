/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */ /*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:06:37 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/01 16:53:57 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed		a( 2 );
		Fixed const	b( Fixed( 1.01f ) * a.toInt() );

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a: " << ++a << std::endl;
		std::cout << "a: " << a-- << std::endl;
		std::cout << "a: " << a << std::endl;
		if (a < b)
			std::cout << "b is greater than a" << std::endl;
		else
			std::cout << "a is greater than b" << std::endl;
	}
	{
		Fixed		a( 2 );
		Fixed const	b( 2.0f );

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		if (a == b)
			std::cout << "a equals b" << std::endl;
		a++;
		if (a >= b)
			std::cout << "a is greater than or equals b" << std::endl;
		else
			std::cout << "b is greater than or equlas a" << std::endl;
	}
	{
		Fixed		a( 2 );
		Fixed const	b( 10 );

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl;
	}
	{
		Fixed		a( 2 );
		Fixed const	b( 20.0f );

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "Maximum: " << Fixed::max( a, b ) << std::endl;
		std::cout << "Minimum: " << Fixed::min( a, b ) << std::endl;
	}

	return (0);
}
