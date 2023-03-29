/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:28:32 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/29 16:35:39 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter {

	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& ScalarConverter);
		~ScalarConverter(void);

		ScalarConverter&	operator= (const ScalarConverter& ScalarConverter);

		/* Member functions */	
		static void	convert(std::string var);

	private:
		static int		_converted[4];
		static char		_c;
		static int		_i;
		static float	_f;
		static double	_d;
};

#endif
