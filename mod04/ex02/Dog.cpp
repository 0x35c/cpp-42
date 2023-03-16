/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 10:27:38 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): AAnimal(){
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain;
	_typeDog = "Dog";
	_type = "Dog";
}

Dog::Dog(const Dog& Dog): AAnimal(){
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = Dog._brain;
	_typeDog = Dog._typeDog;
	_type = Dog._type;
}

Dog&	Dog::operator= (const Dog& Dog){
	std::cout << "Dog copy assignment operator overload called" << std::endl;
	_brain = Dog._brain;
	_typeDog = Dog._typeDog;
	_type = Dog._type;
	return (*this);
}

std::string	Dog::getType(void) const{
	return (_typeDog);
}

std::string	Dog::getIdea(int idea_index) const{
	return (_brain->getIdea(idea_index));
}

void	Dog::setIdea(int idea_index, std::string ideas){
	_brain->setIdea(idea_index, ideas);
}

void	Dog::makeSound(void) const{
	std::cout << "*waf*" << std::endl;
}

Dog::~Dog(void){
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}
