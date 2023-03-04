/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:46:18 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/04 15:44:59 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point{
	public:
		Point(void);
		Point(const Point& point);
		Point(const float nb1, const float nb2);
		~Point(void);

		Point&	operator= (const Point& point);
		bool	operator== (const Point& fixed) const;
		float	getX(void) const;
		float	getY(void) const;

	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif
