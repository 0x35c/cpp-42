/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:19:17 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/09 16:52:15 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : virtual public Animal
{
	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog& Dog);
		~Dog(void);

		Dog&	operator= (const Dog& Dog);

		/* Member functions */	
		void	makeSound(void);

	protected:
		std::string	_typeDog;
		using		Animal::_type;
};

#endif
