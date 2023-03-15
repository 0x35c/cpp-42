/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:19:17 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/15 14:28:39 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain(void);
		Brain(std::string ideas);
		Brain(const Brain& Brain);
		~Brain(void);

		Brain&	operator= (const Brain& Brain);

		/* Member functions */	
		std::string		getIdea(int idea_index) const;
		void			setIdea(int idea_index, std::string idea);

	private:
		std::string	_ideas[100];
};

#endif
