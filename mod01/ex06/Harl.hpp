/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:58:36 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/01 14:23:03 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
