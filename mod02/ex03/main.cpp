/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:06:37 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/04 15:48:19 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point		a(0, 0);
	Point		b(3.5, 0);
	Point		c(1.75, 3.5);
	Point		point(1.75, 0);

	std::cout << "Point inside the triangle: " << bsp(a, b, c, point) << std::endl;

	return (0);
}
