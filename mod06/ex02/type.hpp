/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:39:00 by ulayus            #+#    #+#             */
/*   Updated: 2023/04/05 12:42:22 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_HPP
#define TYPE_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
