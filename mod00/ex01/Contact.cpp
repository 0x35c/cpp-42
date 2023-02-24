/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:23:32 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/24 19:31:09 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>

Contact::Contact(){ added = false;
}

Contact::~Contact(){
}

std::string	resizeStr(std::string str){
	str.resize(9);
	str.push_back('.');
	return (str);
}

void	Contact::Add(void){
	std::cout << "Add a last name: ";
	getline(std::cin, this->_lastName);
	if (this->_lastName.length() > 10)
		this->_lastName = resizeStr(this->_lastName);
	std::cout << "Add a first name: ";
	getline(std::cin, this->_firstName);
	if (this->_firstName.length() > 10)
		this->_firstName = resizeStr(this->_firstName);
	std::cout << "Add a nickname: ";
	getline(std::cin, this->_nickname);
	if (this->_nickname.length() > 10)
		this->_nickname = resizeStr(this->_nickname);
	std::cout << "Add a phone number: ";
	getline(std::cin, this->_number);
	if (this->_number.length() > 10)
		this->_number = resizeStr(this->_number);
	std::cout << "Add a secret: ";
	getline(std::cin, this->_secret);
	if (this->_secret.length() > 10)
		this->_secret = resizeStr(this->_secret);
	this->added = true;
}

void	Contact::PrintContactList(int index){
	std::cout << "|__" << index + 1 << "__|";
	std::cout << std::setw(10);
	std::cout << this->_lastName << "|";
	std::cout << std::setw(10);
	std::cout << this->_firstName << "|";
	std::cout << std::setw(10);
	std::cout << this->_nickname << "|" << std::endl;
}

void	Contact::PrintContact(void){
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_number << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}
