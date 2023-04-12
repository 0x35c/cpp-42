/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:17:15 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/04 13:35:02 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	armand("Armand");
	ScavTrap	louis("Louis");
	FragTrap	mbabo("Mbabo");

	for (int i = 0; i < 11; i++)
		louis.attack("oui");		
	louis.guardGate();
	mbabo.takeDamage(3);
	mbabo.beRepaired(2);
	mbabo.highFivesGuys();
	armand.takeDamage(11);
	armand.beRepaired(2);
	return (0);
}
