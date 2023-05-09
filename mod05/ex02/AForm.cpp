/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 13:52:57 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

AForm::AForm(void):_name("Default form"), _gradeToExecute(10), _gradeToSign(20){
	std::cout << "AForm default constructor called" << std::endl;
	_isSigned = false;
}

AForm::AForm(const AForm& AForm): _name(AForm._name), _gradeToExecute(AForm._gradeToExecute), _gradeToSign(AForm._gradeToSign){
	std::cout << "AForm copy constructor called" << std::endl;
	_isSigned = AForm._isSigned;
}

AForm::AForm(std::string name, int gradeToExecute, int gradeToSign):_name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign){
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeToExecute < 1 || gradeToSign < 1)
		throw AForm::GradeTooHighException();
	std::cout << "AForm with arguments constructor called" << std::endl;
}

AForm&	AForm::operator= (const AForm& AForm){
	std::cout << "AForm copy assignment operator overload called" << std::endl;
	_isSigned = AForm._isSigned;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const AForm& form){
	std::cout << "AForm name: " << form.getName() << std::endl;
	if (form.getIsSigned() == false)
		std::cout << "AForm signed: no" << std::endl;
	else
		std::cout << "AForm signed: yes" << std::endl;
	std::cout << "Required grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Required grade to execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}

void	AForm::beSigned(Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= _gradeToSign)	
		_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::execute(const Bureaucrat& executor) const{
	if (_isSigned == true && executor.getGrade() <= this->getGradeToExecute()) {
		std::cout << "random function" << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}


std::string AForm::getName(void) const{
	return (_name);
}

bool AForm::getIsSigned(void) const{
	return (_isSigned);
}

int	AForm::getGradeToExecute(void) const{
	return (_gradeToExecute);
}

int	AForm::getGradeToSign(void) const{
	return (_gradeToSign);
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("The grade is too high for the required action.");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("The grade is too low for the required action.");
}

AForm::~AForm(void){
	std::cout << "AForm destructor called" << std::endl;
}
