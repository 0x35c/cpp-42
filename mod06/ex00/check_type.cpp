/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 09:47:58 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/03 09:52:11 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	isStrDigit(std::string var)
{
	bool	isPoint;
	bool	isSign;

	isPoint = false;
	isSign = false;
	for (int i = 0; i < (int)var.length(); i++) {
		if (i == 0 && (var[i] == '-' || var[i] == '+'))
		{
			isSign = true;
			i++;
		}
		if (var[i] == '.' && isSign == true && isPoint == false && isdigit((var.c_str())[i - 1]))
			isPoint = true;
		if (!isdigit((var.c_str())[i]))
			return (0);	
	}
		return (1);
}

int	isChar(std::string var){
	const char	*c_var = var.c_str();

	if (var.length() != 1)
		return (-4);
	else if (isdigit(c_var[0]))
		return (0);
	return (1);
}

int	isInt(std::string var){
	const char	*c_var = var.c_str();
	int			i;

	i = 0;
	if (isStrDigit(var) == 0 && var.length() > 1)
		return (-4);
	if (c_var[i] == '-' || c_var[i] == '+')
		i++;
	while (c_var[i])
	{
		if (!isdigit(c_var[i]))
			return (0);
		i++;
	}
	return (1);
}

int	isDouble(std::string var){
	const char	*c_var = var.c_str();
	int			i;

	if (var == "-inf")
		return (nINF);
	else if (var == "+inf")
		return (pINF);
	else if(var == "nan")
		return (sNAN);
	if (isStrDigit(var) == 0 && var.length() > 1)
		return (-4);
	i = 0;
	if (c_var[i] == '-' || c_var[i] == '+')
		i++;
	while (c_var[i] && c_var[i] != '.')
	{
		if (!isdigit(c_var[i]))
			return (0);
		i++;
	}
	if (c_var[i] == '\0')
		return (0);
	i++;
	while (c_var[i])
	{
		if (!isdigit(c_var[i]))
			return (0);
		i++;
	}
	return (1);
}

int	isFloat(std::string var){
	const char	*c_var = var.c_str();
	int			i;

	if (var == "-inff")
		return (nINFF);
	else if (var == "+inff")
		return (pINFF);
	else if(var == "nanf")
		return (sNANF);
	if (isStrDigit(var) == 0 && var.length() > 1)
		return (-4);
	i = 0;
	if (c_var[i] == '-' || c_var[i] == '+')
		i++;
	while (c_var[i] && c_var[i] != '.')
	{
		if (!isdigit(c_var[i]))
			return (0);
		i++;
	}
	if (c_var[i] == '\0')
		return (0);
	i++;
	while (c_var[i])
	{
		if (c_var[i] == 'f' && i == (int)var.length() - 1)
			return (1);
		else if (!isdigit(c_var[i]))
			return (0);
		i++;
	}
	if (c_var[i - 1] != 'f')
		return (0);
	return (1);
}
