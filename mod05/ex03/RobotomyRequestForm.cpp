/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:59:50 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/22 09:41:28 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void): AForm("Default shrubbery", 45, 72), _target("Default target"){
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	_isSigned = false;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& RobotomyRequestForm): AForm(){
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	_isSigned = RobotomyRequestForm._isSigned;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Default shrubbery", 45, 72), _target(target){
	std::cout << "RobotomyRequestForm with arguments constructor called" << std::endl;
	_isSigned = false;
}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm& RobotomyRequestForm){
	std::cout << "RobotomyRequestForm copy assignment operator overload called" << std::endl;
	_isSigned = RobotomyRequestForm._isSigned;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const RobotomyRequestForm& form){
	std::cout << "RobotomyRequestForm name: " << form.getName() << std::endl;
	if (form.getIsSigned() == false)
		std::cout << "RobotomyRequestForm signed: no" << std::endl;
	else
		std::cout << "RobotomyRequestForm signed: yes" << std::endl;
	std::cout << "Required grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Required grade to execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}

void	RobotomyRequestForm::beSigned(Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= AForm::getGradeToSign())	
		_isSigned = true;
	else
		throw RobotomyRequestForm::GradeTooLowException();
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (_isSigned == true && executor.getGrade() <= this->getGradeToExecute())
	{
		if (rand() % 2)
		{
			std::cout << "*krkskrskrkskrkskr*" << std::endl;
			std::cout << _target << " has been robotomized" << std::endl;
		}
		else
			std::cout << "The robotomy of " << _target << " failed..." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
