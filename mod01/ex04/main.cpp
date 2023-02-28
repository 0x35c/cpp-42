/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:33:48 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/28 18:01:23 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	std::string	new_file;
	std::string	line;
	std::size_t	first_occur;
	std::string	to_search;
	std::string	to_replace;

	if (ac != 4)
		return (1);
	new_file = av[1];
	new_file += ".replace";
	std::ifstream in(av[1]);
	std::ofstream out(new_file.c_str());
	to_search = av[2];
	to_replace = av[3];

	while (std::getline(in, line))
	{
		while (line.find(to_search) != std::string::npos)
		{
			first_occur = line.find(to_search);
			line.erase(first_occur, to_replace.length());
			line.insert(first_occur, to_replace);
		}
		out << line;
	}
	return (0);
}
