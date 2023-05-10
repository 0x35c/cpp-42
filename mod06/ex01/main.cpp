/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:12:01 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/10 16:24:32 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	s_Data	raw = { "Hello world!", 42 };
	s_Data	*ptr1 = NULL;
	s_Data	*ptr2 = NULL;
	Serializer	serialize;

	ptr1 = &raw;
	if (ptr1 != NULL) {
		std::cout << "Ptr1 message: " << ptr1->message << std::endl;
		std::cout << "Ptr1 value: " << ptr1->value << std::endl;
	}
	std::cout << "--------------------------" << std::endl;

	ptr2 = serialize.deserialize(serialize.serialize(ptr1));
	if (ptr2 != NULL) {
		std::cout << "Ptr2 message: " << ptr2->message << std::endl;
		std::cout << "Ptr2 value: " << ptr2->value << std::endl;
	}

	return (0);
}
