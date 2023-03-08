/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/08 18:53:13 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void){
	_name = "";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap): ClapTrap(DiamondTrap._name){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	_name = DiamondTrap._name;
	_hitPoints = DiamondTrap._hitPoints;
	_energyPoints = DiamondTrap._energyPoints;
	_attackDamage = DiamondTrap._attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name){
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& DiamondTrap){
	std::cout << "DiamondTrap copy assignment operator overload called" << std::endl;
	_name = DiamondTrap._name;
	_hitPoints = DiamondTrap._hitPoints;
	_energyPoints = DiamondTrap._energyPoints;
	_attackDamage = DiamondTrap._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap destructor called" << std::endl;
}
