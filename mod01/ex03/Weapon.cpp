/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:47:04 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/28 15:27:19 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type):_type(type){
}

Weapon::~Weapon(void){
}

void	Weapon::setType(std::string type){
	_type = type;
}

std::string&	Weapon::getType(void){
	return (_type);
}
