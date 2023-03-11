/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/11 12:05:24 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal(){
	std::cout << "Cat default constructor called" << std::endl;
	_typeCat = "Cat";
	_type = "Cat";
}

Cat::Cat(const Cat& Cat): Animal(){
	std::cout << "Cat copy constructor called" << std::endl;
	_typeCat = Cat._typeCat;
	_type = Cat._type;
}

Cat&	Cat::operator= (const Cat& Cat){
	std::cout << "Cat copy assignment operator overload called" << std::endl;
	_typeCat = Cat._typeCat;
	_type = Cat._type;
	return (*this);
}

std::string	Cat::getType(void) const{
	return (_typeCat);
}

void	Cat::makeSound(void) const{
	std::cout << "*meow*" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Cat destructor called" << std::endl;
}
