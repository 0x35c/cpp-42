/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:23:32 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/25 11:44:11 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>
#include <iostream>

Contact::Contact(){ added = false;
}

Contact::~Contact(){
}

void	GetSecureInput(std::string *str){
	getline(std::cin, *str);
	if ((*str).empty())
		exit(0);
}

void	Contact::Add(void){
	std::cout << "Add a last name: ";
	GetSecureInput(&this->_lastName);
	std::cout << "Add a first name: ";
	GetSecureInput(&this->_firstName);
	std::cout << "Add a nickname: ";
	GetSecureInput(&this->_nickname);
	std::cout << "Add a phone number: ";
	GetSecureInput(&this->_number);
	std::cout << "Add a secret: ";
	GetSecureInput(&this->_secret);
	this->added = true;
}

void	PrintRightFormat(std::string attr){
	std::cout << std::setw(10);
	if (attr.length() > 10)
		std::cout << attr.substr(0, 9) + "." << "|";
	else
		std::cout << attr << "|";
}

void	Contact::PrintContactList(int index){
	std::cout << "|__" << index + 1 << "__|";
	PrintRightFormat(this->_firstName);
	PrintRightFormat(this->_lastName);
	PrintRightFormat(this->_nickname);
	std::cout << std::endl;
}

void	Contact::PrintContact(void){
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_number << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}
