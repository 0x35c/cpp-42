/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:17:15 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/09 13:58:18 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	mbabo("Mbabo");

	mbabo.takeDamage(1);
	mbabo.highFivesGuys();
	mbabo.guardGate();
	mbabo.attack("no");
	mbabo.beRepaired(10);
	mbabo.whoAmI();
	return (0);
}
