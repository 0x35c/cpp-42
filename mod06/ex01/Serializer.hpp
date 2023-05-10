/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:28:32 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/10 16:19:40 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP_
#define SERIALIZER_HPP_

#include "Data.hpp"
#include <stdint.h>

class Serializer {

	public:
		Serializer(void);
		Serializer(const Serializer& Serializer);
		~Serializer(void);

		Serializer&	operator= (const Serializer& Serializer);

		/* Member functions */	
		static uintptr_t	serialize(s_Data *ptr);
		static s_Data*		deserialize(uintptr_t raw);
};

#endif
