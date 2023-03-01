/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:01:31 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/01 14:37:14 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void){
	_comments[0] = &Harl::debug;
	_comments[1] = &Harl::info;
	_comments[2] = &Harl::warning;
	_comments[3] = &Harl::error;
}

Harl::~Harl(void){
}

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. " << std::endl;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	std::string	tokens[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (tokens[i] == level)
			break ;
		i++;
	}
	if (i == 4)
	{
		std::cout << "Error: comment not available" << std::endl;
		return ;
	}
	while (i < 4)
	{
		(this->*(_comments[i]))();
		i++;
	}
}
