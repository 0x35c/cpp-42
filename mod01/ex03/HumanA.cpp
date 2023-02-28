/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:16:42 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/28 15:21:33 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon):_name(name), _weapon(weapon){
}

HumanA::~HumanA(void){
}

void	HumanA::attack(void){
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
