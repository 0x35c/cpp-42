/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/20 13:32:12 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
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

void	Bureaucrat::signForm(AForm& AForm){
	try
	{
		AForm.beSigned(*this);
		std::cout << _name << " signed " << AForm.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << _name << " couldn't sign " << AForm.getName() << " because his grade was too low." << std::endl;	
	}
}

void	Bureaucrat::execute(AForm const& form){
	try
	{
		form.execute(*this);
	}
	catch (GradeTooLowException& e)
	{
		std::cout << "Couldnt execute form: " << e.what() << std::endl;	
	}
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
