/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:19:17 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/09 16:56:49 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : virtual public Animal
{
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat& Cat);
		~Cat(void);

		Cat&	operator= (const Cat& Cat);

		/* Member functions */	
		void	makeSound(void);

	protected:
		std::string	_typeCat;
		using		Animal::_type;
};

#endif
