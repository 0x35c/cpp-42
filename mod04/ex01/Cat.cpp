/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/06 10:09:12 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal(){
	std::cout << "Cat default constructor called" << std::endl;
	_brain = new Brain;
	_typeCat = "Cat";
	_type = "Cat";
}

Cat::Cat(const Cat& Cat): Animal(){
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*Cat._brain);
	_typeCat = Cat._typeCat;
	_type = Cat._type;
}

Cat&	Cat::operator= (const Cat& Cat){
	std::cout << "Cat copy assignment operator overload called" << std::endl;
	*_brain = *Cat._brain;
	_typeCat = Cat._typeCat;
	_type = Cat._type;
	return (*this);
}

std::string	Cat::getType(void) const{
	return (_typeCat);
}

std::string Cat::getIdea(int idea_index) const{
	return (_brain->getIdea(idea_index));
}

void	Cat::setIdea(int idea_index, std::string ideas){
	_brain->setIdea(idea_index, ideas);
}

void	Cat::makeSound(void) const{
	std::cout << "*meow*" << std::endl;
}

Cat::~Cat(void){
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}
