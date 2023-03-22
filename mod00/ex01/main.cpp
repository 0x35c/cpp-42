/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:26:18 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/22 13:42:01 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	std::cout << "Input a command (ADD, SEARCH or EXIT)" << std::endl;
	while (std::getline(std::cin, command) && command != "EXIT")
	{
		if (command.empty())
			std::cout << "Empty command..." << std::endl;
		else if (command == "ADD")
			phonebook.Add();
		else if (command == "SEARCH")
			phonebook.Search();
		else
			std::cout << "Invalid command" << std::endl;
		command.clear();
		std::cout << "Input a command (ADD, SEARCH or EXIT)" << std::endl;
	}
	return (0);
}
