/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:09:31 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/27 10:49:50 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon{
	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string&	getType(void);
		void			setType(std::string type);
	
	private:
		std::string	_type;
};

#endif
