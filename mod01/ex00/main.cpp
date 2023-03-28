/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:25:05 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/28 15:56:16 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	first_zombie("Armand");
	Zombie*	second_zombie = newZombie("Unai");

	first_zombie.announce();
	second_zombie->announce();
	randomChump("Sard");
	delete second_zombie;
	return (0);
}
