/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:23:32 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/24 19:25:38 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
}

PhoneBook::~PhoneBook(void){
}

void PhoneBook::Search(void){
	int	i;

	std::cout << "      |First name| Last name| Nickname |" << std::endl;
	std::cout << "|-----|----------|----------|----------|" << std::endl;
	i = 0;
	while (i < 8)
	{
		contacts[i].PrintContactList(i);
		i++;
	}
	std::cout << "Enter the index: ";
	std::cin >> i;
	if (i > 0 && i < 9)
		contacts[i - 1].PrintContact();
}

void	PhoneBook::Add(void){
	int	i;

	i = 0;
	while (this->contacts[i].added == true)
		i++;
	contacts[i].Add();
}
