/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:58:36 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/28 13:45:32 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class	Harl{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:
		void	(Harl::* _comments[4])(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
