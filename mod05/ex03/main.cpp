/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:39:45 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 13:49:00 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{

	try {
		Bureaucrat	adamiens("adamiens", 1);
		Bureaucrat	mbabo("mbabo", 50);
		Bureaucrat	ltruchel("ltruchel", 145);
		AForm*	firstForm = new ShrubberyCreationForm("julemart");
		AForm*	secondForm = new RobotomyRequestForm("averdon");
		AForm*	thirdForm = new PresidentialPardonForm("thellego");

		std::cout << "----------------------------" << std::endl;
		try {
			adamiens.signForm(*firstForm);
			adamiens.execute(*firstForm);
			mbabo.signForm(*firstForm);
			mbabo.execute(*firstForm);
			ltruchel.signForm(*firstForm);
			ltruchel.execute(*firstForm);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "----------------------------" << std::endl;

		try {
			adamiens.signForm(*secondForm);
			adamiens.execute(*secondForm);
			mbabo.signForm(*secondForm);
			mbabo.execute(*secondForm);
			ltruchel.signForm(*secondForm);
			ltruchel.execute(*secondForm);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "----------------------------" << std::endl;

		try {
			adamiens.signForm(*thirdForm);
			adamiens.execute(*thirdForm);
			mbabo.signForm(*thirdForm);
			mbabo.execute(*thirdForm);
			ltruchel.signForm(*thirdForm);
			ltruchel.execute(*thirdForm);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "----------------------------" << std::endl;

		delete firstForm;
		delete secondForm;
		delete thirdForm;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	return (0);
}
