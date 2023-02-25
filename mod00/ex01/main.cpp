/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:26:18 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/25 12:34:00 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (std::getline(std::cin, command) && command != "EXIT")
	{
		if (command.empty())
			std::exit(0);
		else if (command == "ADD")
			phonebook.Add();
		else if (command == "SEARCH")
			phonebook.Search();
		else
			std::cout << "Invalid command" << std::endl;
		command.clear();
	}
	return (0);
}
