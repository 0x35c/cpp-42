/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:12:07 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/28 15:22:40 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack(void);

	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
