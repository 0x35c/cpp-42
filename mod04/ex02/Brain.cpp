/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/15 14:28:48 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void){
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++){
		_ideas[i] = "Basic idea";
	}
}

Brain::Brain(const Brain& Brain){
	for (int i = 0; i < 100; i++){
		_ideas[i] = Brain._ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator= (const Brain& Brain){
	for (int i = 0; i < 100; i++){
		_ideas[i] = Brain._ideas[i];
	}
	std::cout << "Brain copy assignment operator overload called" << std::endl;
	return (*this);
}

std::string	Brain::getIdea(int idea_index) const{
	if (idea_index > 99 || idea_index < 0)
	{
		std::cout << "Error: Invalid index" << std::endl;
		return (NULL);
	}
	return (_ideas[idea_index]);
}

void	Brain::setIdea(int idea_index, std::string idea){
	if (idea_index > 99 || idea_index < 0)
		std::cout << "Error: Invalid index" << std::endl;
	else
		_ideas[idea_index] = idea;
}

Brain::~Brain(void){
	std::cout << "Brain destructor called" << std::endl;
}
