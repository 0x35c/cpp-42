/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:16:42 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/28 16:00:16 by ulayus           ###   ########.fr       */
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
	if (this->_weapon != NULL)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << "No weapon bozo..." << std::endl;
}
