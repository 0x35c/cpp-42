/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:19:17 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 10:26:38 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"
#include <string>

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(const Dog& Dog);
		virtual ~Dog(void);

		Dog&	operator= (const Dog& Dog);

		/* Member functions */	
		void			makeSound(void) const;
		std::string		getType(void) const;
		std::string		getIdea(int idea_index) const;
		void			setIdea(int idea_index, std::string ideas);

	private:
		std::string	_typeDog;
		using		AAnimal::_type;
		Brain*		_brain;
};

#endif
