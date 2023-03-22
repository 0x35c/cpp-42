/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:23:32 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/22 13:45:18 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook(void){ _currentContact = 0;
}

PhoneBook::~PhoneBook(void){
}

void PhoneBook::Search(void){
	std::string	str_index;
	int			index;

	std::cout << "      |First name| Last name| Nickname |" << std::endl;
	std::cout << "|-----|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8 && contacts[i].added == true; i++)
		contacts[i].PrintContactList(i);
	std::cout << std::endl;
	do 
	{
		std::cout << "Enter the index: ";
		std::getline(std::cin, str_index);
		if (str_index.empty())
			exit_error();
		index = std::atoi(str_index.c_str());
		if (index > 0 && index < 9)
		{
			if (contacts[index - 1].added == true)
				contacts[index - 1].PrintContact();
			else
				std::cout << "Contact not added yet." << std::endl;
		}
		else
			std::cout << "Invalid index..." << std::endl;
	} while (index < 1 || index > 8);
}

void	PhoneBook::Add(void){
	if (this->_currentContact == 8)
		this->_currentContact = 0;
	contacts[this->_currentContact].Add();
	this->_currentContact++;
}
