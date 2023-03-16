/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:19:17 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 10:35:19 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal& AAnimal);
		virtual ~AAnimal(void);

		AAnimal&	operator= (const AAnimal& AAnimal);

		/* Member functions */	
		virtual void		makeSound(void) const = 0;
		virtual std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif
