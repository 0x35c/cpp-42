/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 16:08:14 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void):_name("Default"), _grade(150){
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& Bureaucrat){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	_grade = Bureaucrat._grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name){
	std::cout << "Bureaucrat with arguments constructor called" << std::endl;
	if (grade <= 150 && grade > 0)
		_grade = grade;
	else
		std::cout << "Invalid grade (must be between 1 and 150)" << std::endl;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& Bureaucrat){
	std::cout << "Bureaucrat copy assignment operator overload called" << std::endl;
	_grade = Bureaucrat._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat){
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (out);
}

int	Bureaucrat::getGrade(void) const{
	return (_grade);
}

std::string Bureaucrat::getName(void) const{
	return (_name);
}

void	Bureaucrat::incGrade(void){
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decGrade(void){
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat destructor called" << std::endl;
}
