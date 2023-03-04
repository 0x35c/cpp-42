/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:48:58 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/04 15:45:30 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float	calculate_area(float x1, float y1, float x2, float y2, float x3, float y3){
	return (std::abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	float	A0;
	float	A1;
	float	A2;
	float	A3;

	if (point == a || point == b || point == c)
		return (false);
	A0 = calculate_area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	A1 = calculate_area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	A2 = calculate_area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
	A3 = calculate_area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
	if (A0 == A1 + A2 + A3)
		return (true);
	return (false);
}
