/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:12:01 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/29 16:13:12 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);

	ScalarConverter	converter;

	converter.convert(av[1]);

	return (0);
}
