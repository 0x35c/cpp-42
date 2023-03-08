/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/08 15:29:16 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void): ClapTrap(){
	_name = "";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap): ClapTrap(ScavTrap._name){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	_name = ScavTrap._name;
	_hitPoints = ScavTrap._hitPoints;
	_energyPoints = ScavTrap._energyPoints;
	_attackDamage = ScavTrap._attackDamage;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap& ScavTrap){
	std::cout << "ScavTrap copy assignment operator overload called" << std::endl;
	_name = ScavTrap._name;
	_hitPoints = ScavTrap._hitPoints;
	_energyPoints = ScavTrap._energyPoints;
	_attackDamage = ScavTrap._attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl; 
	}
	else
	{
		if (_hitPoints < 1)
			std::cout << "Attack impossible: not enough hit points" << std::endl;
		if (_energyPoints < 1)
			std::cout << "Attack impossible: not enough energy points" << std::endl;
	}
}

void	ScavTrap::guardGate(void){
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor called" << std::endl;
}
