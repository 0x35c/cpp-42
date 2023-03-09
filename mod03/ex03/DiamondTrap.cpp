/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/09 14:08:38 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void): ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_name += "_clap_name";
	_nameDiamond = "";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap): ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	_name = DiamondTrap._name;
	_nameDiamond = DiamondTrap._nameDiamond;
	_hitPoints = DiamondTrap._hitPoints;
	_energyPoints = DiamondTrap._energyPoints;
	_attackDamage = DiamondTrap._attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name){
	std::cout << "DiamondTrap name constructor called" << std::endl;
	_name += "_clap_name";
	_nameDiamond = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& DiamondTrap){
	std::cout << "DiamondTrap copy assignment operator overload called" << std::endl;
	_name = DiamondTrap._name;
	_nameDiamond = DiamondTrap._nameDiamond;
	_hitPoints = DiamondTrap._hitPoints;
	_energyPoints = DiamondTrap._energyPoints;
	_attackDamage = DiamondTrap._attackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI(void){
	std::cout << "My name is: " << _nameDiamond << std::endl;
	std::cout << "My ClapTrap name is: " << _name << std::endl;
}

void	DiamondTrap::attack(const std::string& target){
	this->ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap destructor called" << std::endl;
}
