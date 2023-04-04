/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/03 09:40:07 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int		ScalarConverter::_converted[4] = { 0, 0, 0, 0 }; char	ScalarConverter::_c = 0;
int		ScalarConverter::_i = 0;
float	ScalarConverter::_f = 0.0f;
double	ScalarConverter::_d = 0.0;

ScalarConverter::ScalarConverter(void){
	/* std::cout << "ScalarConverter default constructor called" << std::endl; */
}

ScalarConverter::ScalarConverter(const ScalarConverter& ScalarConverter){
	/* std::cout << "ScalarConverter copy constructor called" << std::endl; */
	ScalarConverter::_c = ScalarConverter._c;
	ScalarConverter::_i = ScalarConverter._i;
	ScalarConverter::_f = ScalarConverter._f;
	ScalarConverter::_d = ScalarConverter._d;
	for (int i = 0; i < 4; i++){
		ScalarConverter::_converted[i] = ScalarConverter._converted[i];
	}
}

ScalarConverter&	ScalarConverter::operator= (const ScalarConverter& ScalarConverter){
	/* std::cout << "ScalarConverter copy assignment operator overload called" << std::endl; */
	ScalarConverter::_c = ScalarConverter._c;
	ScalarConverter::_i = ScalarConverter._i;
	ScalarConverter::_f = ScalarConverter._f;
	ScalarConverter::_d = ScalarConverter._d;
	for (int i = 0; i < 4; i++){
		ScalarConverter::_converted[i] = ScalarConverter._converted[i];
	}
	return (*this);
}

static void	printChar(int token, char c){
	std::cout << "char: ";
	if (token == -2 || token == -4)
		std::cout << "impossible" << std::endl;
	else if (token == -1)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
}

static void	printInt(int token, int nb){
	std::cout << "int: ";
	if (token == -1)
		std::cout << "over/underflow" << std::endl;
	else if (token == -2 || token == -4)
		std::cout << "impossible" << std::endl;
	else
		std::cout << nb << std::endl;
}

static void	printFloat(int token, float nb){
	std::cout << "float: ";
	if (token == nINFF)
		std::cout << "-inff" << std::endl;
	else if (token == pINFF)
		std::cout << "+inff" << std::endl;
	else if (token == sNANF)
		std::cout << "nanf" << std::endl;
	else if (token == -4)
		std::cout << "impossible" << std::endl;
	else
	{
		if (std::fmod(nb, 1.0) == 0)
			std::cout << nb << ".0f" << std::endl;
		else
			std::cout << nb << "f" << std::endl;
	}
}

static void	printDouble(int token, double nb){
	std::cout << "double: ";
	if (token == nINF)
		std::cout << "-inf" << std::endl;
	else if (token == pINF)
		std::cout << "+inf" << std::endl;
	else if (token == sNAN)
		std::cout << "nan" << std::endl;
	else if (token == -4)
		std::cout << "impossible" << std::endl;
	else
	{
		if (std::fmod(nb, 1.0) == 0)
			std::cout << nb << ".0" << std::endl;
		else
			std::cout << nb << std::endl;
	}
}

void	ScalarConverter::convert(std::string var){
	int	(* func[4])(std::string) = { &isChar, &isInt, &isFloat, &isDouble };
	long	l_tmp;
	float	f_tmp;
	double	d_tmp;

	for (int i = 0; i < 4; i++) {
		ScalarConverter::_converted[i] = func[i](var);
	}
	if (_converted[3] == sNAN)
	{_converted[0] = -2; _converted[1] = -2; _converted[2] = sNANF;}
	else if (_converted[2] == sNANF)
	{_converted[0] = -2; _converted[1] = -2; _converted[3] = sNAN;}
	else if (_converted[3] == pINF)
	{_converted[0] = -2; _converted[1] = -2; _converted[2] = pINFF;}
	else if (_converted[2] == pINFF)
	{_converted[0] = -2; _converted[1] = -2; _converted[3] = pINF;}
	else if (_converted[3] == nINF)
	{_converted[0] = -2; _converted[1] = -2; _converted[2] = nINFF;}
	else if (_converted[2] == nINFF)
	{_converted[0] = -2; _converted[1] = -2; _converted[3] = nINF;}
	if (_converted[0])
	{
		_c = var[0];
		_i = (int)_c;
		_f = static_cast<float>(_c);
		_d = static_cast<double>(_c);
	}
	else if (_converted[1])
	{
		l_tmp = atol(var.c_str());
		if (l_tmp > 2147483647 || l_tmp < -2147483648)
			_converted[1] = -1;
		else
			_i = l_tmp;
		if (!std::isprint((char)l_tmp))
			_converted[0] = -1;
		else
			_c = (char)_i;
		_f = static_cast<float>(l_tmp);
		_d = static_cast<double>(l_tmp);
	}
	else if (_converted[2])
	{
		f_tmp = atof(var.c_str());
		if (f_tmp > 2147483647.0 || f_tmp < -2147483648.0)
			_converted[1] = -1;
		else
			_i = static_cast<int>(f_tmp);
		if (f_tmp > 255.0 || f_tmp < 9.0)
			_converted[0] = -2;
		else
			_c = (char)_i;
		_f = f_tmp;
		_d = static_cast<double>(f_tmp);
	}
	else if (_converted[3])
	{
		d_tmp = atof(var.c_str());
		if (d_tmp > 2147483647.0 || d_tmp < -2147483648.0)
			_converted[1] = -1;
		else
			_i = static_cast<int>(d_tmp);
		if (d_tmp > 255.0 || d_tmp < 9.0)
			_converted[0] = -2;
		else
			_c = (char)_i;
		_d = d_tmp;
		_f = static_cast<float>(d_tmp);
	}
}

void	ScalarConverter::printNumbers(void){
	for (int i = 0; i < 4; i++) {
		if (i == 0)
			printChar(_converted[i], _c);
		else if (i == 1)
			printInt(_converted[i], _i);
		else if (i == 2)
			printFloat(_converted[i], _f);
		else if (i == 3)
			printDouble(_converted[i], _d);
	}
}

ScalarConverter::~ScalarConverter(void){
	/* std::cout << "ScalarConverter destructor called" << std::endl; */
}
