/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:14:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/03 14:02:57 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>
#include <cmath>

const int	Fixed::_nbFractionnalBits = 8;

Fixed::Fixed(void):_fixedNumber(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number){
	std::cout << "Int constructor called" << std::endl;
	_fixedNumber = number * (1 << _nbFractionnalBits); 	
}

Fixed::Fixed(const float number){
	std::cout << "Float constructor called" << std::endl;
	_fixedNumber = roundf(number * (1 << _nbFractionnalBits)); 	
}

Fixed::Fixed(const Fixed& fixed){
	std::cout << "Copy constructor called" << std::endl;
	_fixedNumber = fixed._fixedNumber;
}

Fixed&	Fixed::operator=(const Fixed& fixed){
	_fixedNumber = fixed._fixedNumber;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::toInt(void) const{
	int	number;

	number = _fixedNumber / (1 << _nbFractionnalBits); 	
	return (number);
}

float Fixed::toFloat(void) const{
	float	number;

	number = (float)_fixedNumber / (1 << _nbFractionnalBits); 	
	return (number);
}
