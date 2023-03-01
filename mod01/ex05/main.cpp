/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:14:52 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/01 14:15:53 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	human;

	human.complain("DEBUG");
	human.complain("WARNING");
	human.complain("INFO");
	human.complain("ERROR");
	return (0);
}
