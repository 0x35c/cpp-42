/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:07:27 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/01 20:27:48 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed{
	public:
		Fixed(void);
		Fixed(const Fixed& fixed);
		Fixed& operator= (const Fixed& fixed);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		static const int	_nbFractionnalBits;
		int					_fixedNumber;
};

#endif
