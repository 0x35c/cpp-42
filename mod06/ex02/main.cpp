/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:40:11 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/03 18:53:17 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.hpp"

int	main(void)
{
	Base*	base = generate();
	identify(base);
	identify(*base);
	/* identify(*generate()); */
	return (0);
}