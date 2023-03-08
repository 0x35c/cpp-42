/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:17:15 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/08 10:57:01 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	louis("Louis");
	ClapTrap	armand("Armand");
	ClapTrap	mbabo("Mbabo");

	louis.attack("oui");		
	mbabo.takeDamage(3);
	mbabo.beRepaired(2);
	armand.takeDamage(1);
	return (0);
}
