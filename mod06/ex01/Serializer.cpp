/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/03 09:35:13 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

Serializer::Serializer(void){
	std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer& Serializer){
	std::cout << "Serializer copy constructor called" << std::endl;
	(void)Serializer;
}

Serializer&	Serializer::operator= (const Serializer& Serializer){
	std::cout << "Serializer copy assignment operator overload called" << std::endl;
	(void)Serializer;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

Serializer::~Serializer(void){
	std::cout << "Serializer destructor called" << std::endl;
}
