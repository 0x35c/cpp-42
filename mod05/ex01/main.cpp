/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:39:45 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 13:37:49 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int	main(void)
{
	try {
		Form invalidForm("invalid", 40, 160);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}

	try {
		Bureaucrat	ltruchel("ltruchel", 150);
		Bureaucrat	mbabo("mbabo", 50);
		Bureaucrat	adamiens("adamiens", 1);
		Form		firstForm("First form", 50, 150);
		Form		secondForm("Second form", 20, 45);

		std::cout << "----------------------------" << std::endl;
		try {
			adamiens.signForm(firstForm);
			mbabo.signForm(firstForm);
			ltruchel.signForm(firstForm);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}

		std::cout << "----------------------------" << std::endl;
		try {
			adamiens.signForm(secondForm);
			mbabo.signForm(secondForm);
			ltruchel.signForm(secondForm);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}

		std::cout << "----------------------------" << std::endl;
		try
		{
			mbabo.incGrade();
			mbabo.incGrade();
			mbabo.incGrade();
			mbabo.incGrade();
			mbabo.incGrade();
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;	
		}
		mbabo.signForm(secondForm);
		std::cout << "----------------------------" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	return (0);
}
