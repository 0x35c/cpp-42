/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/11 12:23:18 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog(void): WrongAnimal(){
	std::cout << "WrongDog default constructor called" << std::endl;
	_typeWrongDog = "WrongDog";
	_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog& WrongDog): WrongAnimal(){
	std::cout << "WrongDog copy constructor called" << std::endl;
	_typeWrongDog = WrongDog._typeWrongDog;
	_type = WrongDog._type;
}

WrongDog&	WrongDog::operator= (const WrongDog& WrongDog){
	std::cout << "WrongDog copy assignment operator overload called" << std::endl;
	_typeWrongDog = WrongDog._typeWrongDog;
	_type = WrongDog._type;
	return (*this);
}

std::string	WrongDog::getType(void) const{
	return (_typeWrongDog);
}

void	WrongDog::makeSound(void) const{
	std::cout << "*waf*" << std::endl;
}

WrongDog::~WrongDog(void){
	std::cout << "WrongDog destructor called" << std::endl;
}
