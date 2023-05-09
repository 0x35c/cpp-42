/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:29:28 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 13:36:20 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void):_name("Default form"), _gradeToExecute(10), _gradeToSign(20){
	std::cout << "Form default constructor called" << std::endl;
	_isSigned = false;
}

Form::Form(const Form& Form): _name(Form._name), _gradeToExecute(Form._gradeToExecute), _gradeToSign(Form._gradeToSign){
	std::cout << "Form copy constructor called" << std::endl;
	_isSigned = Form._isSigned;
}

Form::Form(std::string name, int gradeToExecute, int gradeToSign):_name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign){
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExecute < 1 || gradeToSign < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form with arguments constructor called" << std::endl;
}

Form&	Form::operator= (const Form& Form){
	std::cout << "Form copy assignment operator overload called" << std::endl;
	_isSigned = Form._isSigned;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Form& form){
	std::cout << "Form name: " << form.getName() << std::endl;
	if (form.getIsSigned() == false)
		std::cout << "Form signed: no" << std::endl;
	else
		std::cout << "Form signed: yes" << std::endl;
	std::cout << "Required grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Required grade to execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}

void	Form::beSigned(Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= _gradeToSign)	
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::string Form::getName(void) const{
	return (_name);
}

bool Form::getIsSigned(void) const{
	return (_isSigned);
}

int	Form::getGradeToExecute(void) const{
	return (_gradeToExecute);
}

int	Form::getGradeToSign(void) const{
	return (_gradeToSign);
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("The grade is too high for the required action.");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("The grade is too low for the required action.");
}

Form::~Form(void){
	std::cout << "Form destructor called" << std::endl;
}
