/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:18:42 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/28 16:00:41 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>

class	Zombie{
	public:
		
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

	private:
		std::string _name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
