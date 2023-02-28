/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:16:42 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/28 15:32:06 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):_name(name){
}

HumanB::~HumanB(void){
}

void	HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}

void	HumanB::attack(void){
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
