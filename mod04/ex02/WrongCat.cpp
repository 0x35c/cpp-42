/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/11 12:24:47 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void): WrongAnimal(){
	std::cout << "WrongCat default constructor called" << std::endl;
	_typeWrongCat = "WrongCat";
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& WrongCat): WrongAnimal(){
	std::cout << "WrongCat copy constructor called" << std::endl;
	_typeWrongCat = WrongCat._typeWrongCat;
	_type = WrongCat._type;
}

WrongCat&	WrongCat::operator= (const WrongCat& WrongCat){
	std::cout << "WrongCat copy assignment operator overload called" << std::endl;
	_typeWrongCat = WrongCat._typeWrongCat;
	_type = WrongCat._type;
	return (*this);
}

std::string	WrongCat::getType(void) const{
	return (_typeWrongCat);
}

void	WrongCat::makeSound(void) const{
	std::cout << "*meow*" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat destructor called" << std::endl;
}
