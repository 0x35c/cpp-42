/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/10 16:21:36 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){
}

Serializer::Serializer(const Serializer& other){
	(void)other;
}

Serializer&	Serializer::operator= (const Serializer& other){
	(void)other;
	return (*this);
}

uintptr_t	Serializer::serialize(s_Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

s_Data*	Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<s_Data*>(raw));
}

Serializer::~Serializer(void){
}
