/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:59:50 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/17 14:23:32 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("Default shrubbery", 137, 145){
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	_isSigned = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ShrubberyCreationForm){
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	_isSigned = ShrubberyCreationForm._isSigned;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm(name){
	std::cout << "ShrubberyCreationForm with arguments constructor called" << std::endl;
	_isSigned = false;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm& ShrubberyCreationForm){
	std::cout << "ShrubberyCreationForm copy assignment operator overload called" << std::endl;
	_isSigned = ShrubberyCreationForm._isSigned;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const ShrubberyCreationForm& form){
	std::cout << "ShrubberyCreationForm name: " << form.getName() << std::endl;
	if (form.getIsSigned() == false)
		std::cout << "ShrubberyCreationForm signed: no" << std::endl;
	else
		std::cout << "ShrubberyCreationForm signed: yes" << std::endl;
	std::cout << "Required grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Required grade to execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}

void	ShrubberyCreationForm::beSigned(Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= _gradeToSign)	
		_isSigned = true;
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}

std::string ShrubberyCreationForm::getName(void) const{
	return (_name);
}

bool ShrubberyCreationForm::getIsSigned(void) const{
	return (_isSigned);
}

int	ShrubberyCreationForm::getGradeToExecute(void) const{
	return (_gradeToExecute);
}

int	ShrubberyCreationForm::getGradeToSign(void) const{
	return (_gradeToSign);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
