/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:33:48 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/28 16:05:16 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	std::string	new_file;
	std::string	line;
	std::size_t	pos;
	std::string	to_search;
	std::string	to_replace;

	if (ac != 4)
		return (1);
	new_file = av[1];
	new_file += ".replace";
	std::ifstream in(av[1]);
	if (in.fail())
	{
		std::cout << "Error: cannot open file" << std::endl;
		return (1);
	}
	std::ofstream out(new_file.c_str());
	to_search = av[2];
	if (to_search.empty())
	{
		std::cout << "Error: no string to search" << std::endl;
		return (2);
	}
	to_replace = av[3];

	while (std::getline(in, line))
	{
		pos = 0;
		while (line.find(to_search, pos) != std::string::npos)
		{
			pos = line.find(to_search, pos);
			line.erase(pos, to_search.length());
			line.insert(pos, to_replace);
			pos += to_replace.length();
		}
		out << line;
		out << std::endl;
	}
	return (0);
}
