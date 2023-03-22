/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:59:50 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/22 09:41:37 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("Default shrubbery", 137, 145), _target("Default target"){
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	_isSigned = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ShrubberyCreationForm): AForm(){
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	_isSigned = ShrubberyCreationForm._isSigned;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Default shrubbery", 137, 145), _target(target){
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
	if (bureaucrat.getGrade() <= AForm::getGradeToSign())	
		_isSigned = true;
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	std::string		fileName = _target + "_shrubbery";

	if (_isSigned == true && executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream	file(fileName.c_str());
		file << std::endl;
		file << "               ,@@@@@@@," << std::endl;
		file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		file << "       |o|        | |         | |" << std::endl;
		file << "       |.|        | |         | |" << std::endl;
		file << "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		file << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
