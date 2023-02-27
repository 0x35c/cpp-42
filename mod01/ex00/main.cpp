/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:25:05 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/26 16:50:18 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	first_zombie("Armand");
	Zombie*	second_zombie;
	second_zombie = first_zombie.newZombie("Unai");

	first_zombie.announce();
	second_zombie->announce();
	first_zombie.randomChump("Sard");
	delete second_zombie;
	return (0);
}
