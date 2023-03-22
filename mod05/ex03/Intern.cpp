/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/22 09:48:35 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

Intern::Intern(void){
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& Intern){
	std::cout << "Intern copy constructor called" << std::endl;
	(void) Intern;
}

Intern&	Intern::operator= (const Intern& Intern){
	std::cout << "Intern copy assignment operator overload called" << std::endl;
	(void) Intern;
	return (*this);
}

AForm*	Intern::makeForm(std::string name, std::string target) const {
	AForm*		newForm;
	std::string tokens[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	int			i;

	for (i = 0; i < 3; i++)
	{
		if (name == tokens[i])
			break;
	}
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			newForm = new ShrubberyCreationForm(target);
			break;
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			newForm = new RobotomyRequestForm(target);
			break;
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			newForm = new PresidentialPardonForm(target);
			break;
		default:
			return (NULL);
	
	}
	return (newForm);
}

Intern::~Intern(void){
	std::cout << "Intern destructor called" << std::endl;
}
