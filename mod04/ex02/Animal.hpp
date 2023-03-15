/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:19:17 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/15 13:53:50 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& Animal);
		virtual ~Animal(void);

		Animal&	operator= (const Animal& Animal);

		/* Member functions */	
		virtual void		makeSound(void) const;
		virtual std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif
