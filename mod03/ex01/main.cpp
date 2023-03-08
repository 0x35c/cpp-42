/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:17:15 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/08 16:39:30 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	louis("Louis");
	ScavTrap	armand("Armand");
	ScavTrap	mbabo("Mbabo");

	louis.attack("oui");		
	mbabo.guardGate();
	mbabo.beRepaired(2);
	armand.attack("non");		
	armand.takeDamage(1);
	return (0);
}
