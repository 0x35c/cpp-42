/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 09:47:58 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 16:15:37 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	isChar(std::string var){
	if (isdigit(var[0]))
		return (0);
	return (1);
}

int	isInt(std::string var){
	int i;

	i = 0;
	if (var[i] == '-' || var[i] == '+')
		i++;
	while (var[i])
	{
		if (var[i] != 'f' || var[i] != '.')
			return (0);
		if (!isdigit(var[i]))
			return (-4);
		i++;
	}
	return (1);
}

int	isDouble(std::string var){
	if (var == "-inf")
		return (nINF);
	else if (var == "+inf")
		return (pINF);
	else if(var == "nan")
		return (sNAN);
	return (0);
}

int	isFloat(std::string var){
	if (var == "-inff")
		return (nINFF);
	else if (var == "+inff")
		return (pINFF);
	else if(var == "nanf")
		return (sNANF);
	return (0);
}
