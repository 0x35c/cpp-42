/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/29 16:38:29 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int		ScalarConverter::_converted[4] = { 0, 0, 0, 0 };
char	ScalarConverter::_c = 0;
int		ScalarConverter::_i = 0;
float	ScalarConverter::_f = 0.0f;
double	ScalarConverter::_d = 0.0;

ScalarConverter::ScalarConverter(void){
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& ScalarConverter){
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		ScalarConverter::_converted[i] = ScalarConverter._converted[i];
	}
}

ScalarConverter&	ScalarConverter::operator= (const ScalarConverter& ScalarConverter){
	std::cout << "ScalarConverter copy assignment operator overload called" << std::endl;
	ScalarConverter::_c = ScalarConverter._c;
	ScalarConverter::_i = ScalarConverter._i;
	ScalarConverter::_f = ScalarConverter._f;
	ScalarConverter::_d = ScalarConverter._d;
	for (int i = 0; i < 4; i++){
		ScalarConverter::_converted[i] = ScalarConverter._converted[i];
	}
	return (*this);
}

int	isChar(std::string var){
	const char	*c_var = var.c_str();

	if (var.length() != 1)
		return (0);
	else if (isdigit(c_var[0]))
		return (0);
	return (1);
}

int	isInt(std::string var){
	const char	*c_var = var.c_str();

	for (int i = 0; i < (int)var.length(); i++){
		if (!isdigit(c_var[i]))
			return (0);
	}
	return (1);
}

int	isDouble(std::string var){
	const char	*c_var = var.c_str();
	int			i;

	i = 0;
	while (c_var[i] && c_var[i] != '.')
	{
		if (!isdigit(c_var[i]))
			return (0);
		i++;
	}
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

	i = 0;
	while (c_var[i] && c_var[i] != '.')
	{
		if (!isdigit(c_var[i]))
			return (0);
		i++;
	}
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

void	ScalarConverter::convert(std::string var){
	int	(* func[4])(std::string) = { &isChar, &isInt, &isFloat, &isDouble };

	for (int i = 0; i < 4; i++) {
		ScalarConverter::_converted[i] = func[i](var);
	}
	for (int i = 0; i < 4; i++) {
		if (i == 0)
			std::cout << "char: ";// << _c << std::endl;
		else if (i == 1)
			std::cout << "int: ";// << _i << std::endl;
		else if (i == 2)
			std::cout << "float: ";// << _f << std::endl;
		else if (i == 3)
			std::cout << "double: ";// << _d << std::endl;
		std::cout << ScalarConverter::_converted[i] << std::endl;
	}
}

ScalarConverter::~ScalarConverter(void){
	std::cout << "ScalarConverter destructor called" << std::endl;
}
