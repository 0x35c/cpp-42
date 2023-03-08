/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/08 17:37:55 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void): ClapTrap(){
	_name = "";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& FragTrap): ClapTrap(FragTrap._name){
	std::cout << "FragTrap copy constructor called" << std::endl;
	_name = FragTrap._name;
	_hitPoints = FragTrap._hitPoints;
	_energyPoints = FragTrap._energyPoints;
	_attackDamage = FragTrap._attackDamage;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap&	FragTrap::operator= (const FragTrap& FragTrap){
	std::cout << "FragTrap copy assignment operator overload called" << std::endl;
	_name = FragTrap._name;
	_hitPoints = FragTrap._hitPoints;
	_energyPoints = FragTrap._energyPoints;
	_attackDamage = FragTrap._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void){
	std::cout << "High fives accorded ✋" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor called" << std::endl;
}
