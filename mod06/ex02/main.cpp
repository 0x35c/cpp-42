/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:40:11 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/05 12:38:29 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.hpp"

int	main(void)
{
	{
		srand(time(NULL));
		Base*	base = generate();
		identify(base);
		identify(*base);

		delete base;
	}
	{
		srand(time(NULL));
		Base*	base = generate();
		identify(base);
		identify(*base);

		delete base;
	}

	return (0);
}
