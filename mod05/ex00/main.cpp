/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:39:45 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 13:11:07 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat ltruchel("ltruchel", 151);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << "--------------------------------" << std::endl;

	try {
		Bureaucrat	mbabo("mbabo", 150);
		Bureaucrat	adamiens("adamiens", 1);

		try {
			mbabo.decGrade();
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}
		std::cout << mbabo;
		try {
			adamiens.incGrade();
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}
		std::cout << adamiens;
		try {
			adamiens.decGrade();
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}
		std::cout << adamiens;
		try {
			mbabo.incGrade();
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}
		std::cout << mbabo;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
