/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:28:32 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/03 09:34:50 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP 
# define SERIALIZER_HPP

#include "Data.hpp"
#include <string>
#include <stdint.h>

class Serializer {

	public:
		Serializer(void);
		Serializer(const Serializer& Serializer);
		~Serializer(void);

		Serializer&	operator= (const Serializer& Serializer);

		/* Member functions */	
		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);

	private:
};

#endif
