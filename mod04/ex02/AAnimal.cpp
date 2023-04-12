/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 10:25:50 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void):_type(){
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& AAnimal){
	std::cout << "AAnimal copy constructor called" << std::endl;
	_type = AAnimal._type;
}

AAnimal&	AAnimal::operator= (const AAnimal& AAnimal){
	std::cout << "AAnimal copy assignment operator overload called" << std::endl;
	_type = AAnimal._type;
	return (*this);
}

void	AAnimal::makeSound(void) const{
	std::cout << "Some random animal noise." << std::endl;
}

std::string	AAnimal::getType(void) const{
	return (_type);
}

AAnimal::~AAnimal(void){
	std::cout << "AAnimal destructor called" << std::endl;
}
