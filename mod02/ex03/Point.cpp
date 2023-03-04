/* ************************************************************************** */
/*                                                                            */ /*                                                        :::      ::::::::   */ /*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:14:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/03 16:14:41 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>


Point::Point(void):_x(0), _y(0){
	/* std::cout << "Default constructor called" << std::endl; */
}

Point::Point(const float nb1, const float nb2):_x(nb1), _y(nb2){
	/* std::cout << "Floating points constructor called" << std::endl; */
}

Point&	Point::operator= (const Point& point){
	/* std::cout << "Copy assignment operator overload called" << std::endl; */
	this->~Point();
	new(this) Point(point._x.toFloat(), point._y.toFloat());
	return (*this);
}

Point::Point(const Point& point){
	/* std::cout << "Copy constructor called" << std::endl; */
	Point::operator= (point);
}

float	Point::getX(void) const{
	return (this->_x.toFloat());
}

float	Point::getY(void) const{
	return (this->_y.toFloat());
}

bool	Point::operator== (const Point& fixed) const{
	if (fixed.getX() == this->_x.toFloat() || fixed.getY() == this->_y.toFloat())
		return (true);
	return (false);
}

Point::~Point(void){
	/* std::cout << "Destructor called" << std::endl; */
}
