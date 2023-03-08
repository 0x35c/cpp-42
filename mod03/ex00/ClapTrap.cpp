/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/08 10:58:58 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void):_name(), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ClapTrap){
	std::cout << "Copy constructor called" << std::endl;
	_name = ClapTrap._name;
	_hitPoints = ClapTrap._hitPoints;
	_energyPoints = ClapTrap._energyPoints;
	_attackDamage = ClapTrap._attackDamage;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator= (const ClapTrap& ClapTrap){
	std::cout << "Copy assignment operator overload called" << std::endl;
	_name = ClapTrap._name;
	_hitPoints = ClapTrap._hitPoints;
	_energyPoints = ClapTrap._energyPoints;
	_attackDamage = ClapTrap._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl; 
	}
	else
	{
		if (_hitPoints < 1)
			std::cout << "Attack impossible: not enough hit points" << std::endl;
		if (_energyPoints < 1)
			std::cout << "Attack impossible: not enough energy points" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl; 
		std::cout << "He now has " << _hitPoints << " hit points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repairs " << amount << " hit points!" << std::endl;
		std::cout << "He now has " << _hitPoints << " hit points!" << std::endl;
	}
	else
	{
		if (_hitPoints < 1)
			std::cout << "Repairing impossible: not enough hit points" << std::endl;
		if (_energyPoints < 1)
			std::cout << "Repairing impossible: not enough energy points" << std::endl;
	}
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called" << std::endl;
}
