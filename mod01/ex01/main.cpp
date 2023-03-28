/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:25:05 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/27 10:35:59 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	first_zombie;
	Zombie	*horde;

	first_zombie.setName("ARMAAAAND");
	first_zombie.announce();

	horde = zombieHorde(4, "HORDE");
	for (int i = 0; i < 4; i++){
		horde[i].announce();
	}

	delete []horde;
	return (0);
}
