/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:18:42 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/26 16:53:25 by ulayus           ###   ########.fr       */
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
		Zombie*	zombieHorde(int N, std::string name);

	private:
		std::string name;
};

#endif
