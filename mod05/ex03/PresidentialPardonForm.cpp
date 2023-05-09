/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:59:50 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 15:16:45 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("presidential pardon form", 5, 25), _target("default"){
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	_isSigned = false;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other.getName(), other.getGradeToExecute(), other.getGradeToSign()){
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	_isSigned = other._isSigned;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("presidential pardon form", 5, 25), _target(target){
	std::cout << "PresidentialPardonForm with arguments constructor called" << std::endl;
	_isSigned = false;
}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& other){
	std::cout << "PresidentialPardonForm copy assignment operator overload called" << std::endl;
	_isSigned = other._isSigned;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const PresidentialPardonForm& form){
	std::cout << "PresidentialPardonForm name: " << form.getName() << std::endl;
	if (form.getIsSigned() == false)
		std::cout << "PresidentialPardonForm signed: no" << std::endl;
	else
		std::cout << "PresidentialPardonForm signed: yes" << std::endl;
	std::cout << "Required grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Required grade to execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}

void	PresidentialPardonForm::beSigned(Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= AForm::getGradeToSign())	
		_isSigned = true;
	else
		throw PresidentialPardonForm::GradeTooLowException();
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (_isSigned == true && executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblerox." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
