/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:19:17 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/15 14:28:13 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat& Cat);
		virtual ~Cat(void);

		Cat&	operator= (const Cat& Cat);

		/* Member functions */	
		void			makeSound(void) const;
		std::string		getType(void) const;
		std::string		getIdea(int idea_index) const;
		void			setIdea(int idea_index, std::string ideas);

	private:
		std::string	_typeCat;
		using		Animal::_type;
		Brain*		_brain;
};

#endif
