/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:13:56 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/23 15:56:14 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	size_t		i;
	std::string	arg;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i])
		{
			arg = argv[i];
			for (size_t j = 0; j < arg.length(); j++)
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
