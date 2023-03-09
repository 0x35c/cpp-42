/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/09 15:18:26 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void):_type(""){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& Animal){
	std::cout << "Animal copy constructor called" << std::endl;
	_type = Animal._type;
}

Animal::Animal(std::string type):_type(type){
	std::cout << "Animal type constructor called" << std::endl;
}

Animal&	Animal::operator= (const Animal& Animal){
	std::cout << "Animal copy assignment operator overload called" << std::endl;
	_type = Animal._type;
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Animal destructor called" << std::endl;
}
