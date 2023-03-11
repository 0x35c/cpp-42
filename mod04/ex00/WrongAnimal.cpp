/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/11 12:20:16 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void):_type(){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	_type = WrongAnimal._type;
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal& WrongAnimal){
	std::cout << "WrongAnimal copy assignment operator overload called" << std::endl;
	_type = WrongAnimal._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "Some random animal noise." << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return (_type);
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal destructor called" << std::endl;
}
