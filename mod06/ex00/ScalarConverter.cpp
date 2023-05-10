/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/10 16:16:08 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int		ScalarConverter::_converted[4] = { 0, 0, 0, 0 };
char	ScalarConverter::_c = 0; int		ScalarConverter::_i = 0;
float	ScalarConverter::_f = 0.0f;
double	ScalarConverter::_d = 0.0;

ScalarConverter::ScalarConverter(void){
	/* std::cout << "ScalarConverter default constructor called" << std::endl; */
}

ScalarConverter::ScalarConverter(const ScalarConverter& other){
	/* std::cout << "ScalarConverter copy constructor called" << std::endl; */
	ScalarConverter::_c = other._c;
	ScalarConverter::_i = other._i;
	ScalarConverter::_f = other._f;
	ScalarConverter::_d = other._d;
	for (int i = 0; i < 4; i++){
		ScalarConverter::_converted[i] = other._converted[i];
	}
}

ScalarConverter&	ScalarConverter::operator= (const ScalarConverter& other){
	/* std::cout << "ScalarConverter copy assignment operator overload called" << std::endl; */
	ScalarConverter::_c = other._c;
	ScalarConverter::_i = other._i;
	ScalarConverter::_f = other._f;
	ScalarConverter::_d = other._d;
	for (int i = 0; i < 4; i++){
		ScalarConverter::_converted[i] = other._converted[i];
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

	for (int i = 0; i < 4; i++) {
		ScalarConverter::_converted[i] = func[i](var);
	}
	if (_converted[3] == sNAN || _converted[2] == sNANF || _converted[3] == pINF || _converted[2] == pINFF || _converted[3] == nINF || _converted[2] == nINFF) {
		_converted[0] = -2;
		_converted[1] = -2;
	}
	if (_converted[3] == sNAN) {
		_converted[2] = sNANF;
	}
	else if (_converted[2] == sNANF)
		_converted[3] = sNAN;
	else if (_converted[3] == pINF)
		_converted[2] = pINFF;
	else if (_converted[2] == pINFF)
		_converted[3] = pINF;
	else if (_converted[3] == nINF)
		_converted[2] = nINFF;
	else if (_converted[2] == nINFF)
		_converted[3] = nINF;
	if (_converted[0] == 1) {
		_c = var[0];
		_i = (int)_c;
		_f = static_cast<float>(_c);
		_d = static_cast<double>(_c);
	}
	else if (_converted[1] == 1) {
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
	else {
		const char *c_var = var.c_str();
		char *end;
		double doubleNumber = 0;
		float floatNumber = 0;
		
		doubleNumber = strtod(c_var, &end);
		if (*end != '\0') {
			if (*end == 'f' && *(end + 1) == '\0')
				floatNumber = strtof(c_var, &end);
			else {
				_converted[0] = -4;
				_converted[1] = -4;
				_converted[2] = -4;
				_converted[3] = -4;
				return ;
			}
		}	
		if (floatNumber != 0) {
			if (floatNumber > 255.0 || floatNumber < 9.0)
				_converted[0] = -1;
			else
				_c = static_cast<char>(floatNumber);
			if (floatNumber > 2147483647.0 || floatNumber < -2147483648.0)
				_converted[1] = -1;
			else
				_i = static_cast<int>(floatNumber);
			_f = floatNumber;
			_d = static_cast<double>(floatNumber);
		}
		else {
			if (doubleNumber > 255.0 || doubleNumber < 9.0)
				_converted[0] = -1;
			else
				_c = static_cast<char>(doubleNumber);
			if (doubleNumber > 2147483647.0 || doubleNumber < -2147483648.0)
				_converted[1] = -1;
			else
				_i = static_cast<int>(doubleNumber);
			_f = static_cast<float>(doubleNumber);
			_d = doubleNumber;
		}
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
