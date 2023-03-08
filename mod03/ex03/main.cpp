/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:17:15 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/08 17:39:09 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	louis("Louis");
	FragTrap	armand("Armand");
	ScavTrap	mbabo("Mbabo");

	louis.attack("yes");		
	armand.attack("maybe");		
	armand.takeDamage(1);
	armand.highFivesGuys();
	mbabo.guardGate();
	mbabo.attack("no");
	mbabo.beRepaired(10);
	return (0);
}
