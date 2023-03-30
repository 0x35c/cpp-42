/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:28:32 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/30 11:00:20 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <cmath>
#include <stdint.h>
#include <stdlib.h>

enum specialNumbers { nINF = 2, pINF, sNAN, nINFF, pINFF, sNANF };

int	isChar(std::string var);
int	isInt(std::string var);
int	isFloat(std::string var);
int	isDouble(std::string var);

class ScalarConverter {

	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& ScalarConverter);
		~ScalarConverter(void);

		ScalarConverter&	operator= (const ScalarConverter& ScalarConverter);

		/* Member functions */	
		static void	convert(std::string var);
		static void	printNumbers(void);

	private:
		static int		_converted[4];
		static char		_c;
		static int		_i;
		static float	_f;
		static double	_d;
};

#endif
