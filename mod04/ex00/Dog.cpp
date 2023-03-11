/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/11 12:05:34 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal(){
	std::cout << "Dog default constructor called" << std::endl;
	_typeDog = "Dog";
	_type = "Dog";
}

Dog::Dog(const Dog& Dog): Animal(){
	std::cout << "Dog copy constructor called" << std::endl;
	_typeDog = Dog._typeDog;
	_type = Dog._type;
}

Dog&	Dog::operator= (const Dog& Dog){
	std::cout << "Dog copy assignment operator overload called" << std::endl;
	_typeDog = Dog._typeDog;
	_type = Dog._type;
	return (*this);
}

std::string	Dog::getType(void) const{
	return (_typeDog);
}

void	Dog::makeSound(void) const{
	std::cout << "*waf*" << std::endl;
}

Dog::~Dog(void){
	std::cout << "Dog destructor called" << std::endl;
}
