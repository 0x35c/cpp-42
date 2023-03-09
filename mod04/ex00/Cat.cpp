/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/09 16:56:07 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void):_name(""){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& Cat){
	std::cout << "Cat copy constructor called" << std::endl;
	_type = Cat._type;
}

Cat::Cat(std::string name):_name(name){
	std::cout << "Cat type constructor called" << std::endl;
}

Cat&	Cat::operator= (const Cat& Cat){
	std::cout << "Cat copy assignment operator overload called" << std::endl;
	_type = Cat._type;
	return (*this);
}

Cat::~Cat(void){
	std::cout << "Cat destructor called" << std::endl;
}
