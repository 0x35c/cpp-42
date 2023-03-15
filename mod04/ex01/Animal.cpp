/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/11 12:11:26 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void):_type(){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& Animal){
	std::cout << "Animal copy constructor called" << std::endl;
	_type = Animal._type;
}

Animal&	Animal::operator= (const Animal& Animal){
	std::cout << "Animal copy assignment operator overload called" << std::endl;
	_type = Animal._type;
	return (*this);
}

void	Animal::makeSound(void) const{
	std::cout << "Some random animal noise." << std::endl;
}

std::string	Animal::getType(void) const{
	return (_type);
}

Animal::~Animal(void){
	std::cout << "Animal destructor called" << std::endl;
}
