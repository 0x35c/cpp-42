/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:19:17 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/11 12:15:44 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat& Cat);
		~Cat(void);

		Cat&	operator= (const Cat& Cat);

		/* Member functions */	
		void		makeSound(void) const;
		std::string	getType(void) const;

	private:
		std::string	_typeCat;
		using		Animal::_type;
};

#endif
