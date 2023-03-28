/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:18:42 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/28 16:01:44 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>

class	Zombie{
	public:
		
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
