/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:07:27 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/02 14:27:06 by ulayus           ###   ########.fr       */
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

		Fixed& operator= (const Fixed& fixed);

		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		static const int	_nbFractionnalBits;
		int					_fixedNumber;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
