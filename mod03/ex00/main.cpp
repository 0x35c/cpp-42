/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:17:15 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/04 10:23:31 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	louis("Louis");
	ClapTrap	armand("Armand");
	ClapTrap	mbabo("Mbabo");

	for (int i = 0; i < 11; i++)
		louis.attack("oui");		
	mbabo.takeDamage(3);
	mbabo.beRepaired(2);
	armand.takeDamage(11);
	armand.beRepaired(2);
	return (0);
}
