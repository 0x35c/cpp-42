/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:07:27 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/03 16:45:50 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>

class	Fixed{
	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed& fixed);
		~Fixed(void);

		Fixed&	operator= (const Fixed& fixed);
		
		/* Comparison operators */
		bool	operator== (const Fixed& fixed);
		bool	operator!= (const Fixed& fixed);
		bool	operator< (const Fixed& fixed);
		bool	operator<= (const Fixed& fixed);
		bool	operator> (const Fixed& fixed);
		bool	operator>= (const Fixed& fixed);

		/* Arithmetic operators */
		Fixed&	operator+ (const Fixed& fixed);
		Fixed&	operator- (const Fixed& fixed);
		Fixed&	operator* (const Fixed& fixed);
		Fixed&	operator/ (const Fixed& fixed);

		/* Increment operators */
		Fixed&	operator++ (void);
		Fixed	operator++ (int);
		Fixed&	operator-- (void);
		Fixed	operator-- (int);

		static Fixed&		min(Fixed& nb1, Fixed& nb2);
		static const Fixed&	min(const Fixed& nb1, const Fixed& nb2);
		static Fixed&		max(Fixed& nb1, Fixed& nb2);
		static const Fixed&	max(const Fixed& nb1, const Fixed& nb2);

		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		static const int	_nbFractionnalBits;
		int					_fixedNumber;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
