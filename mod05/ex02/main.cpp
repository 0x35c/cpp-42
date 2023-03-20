/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:39:45 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/20 14:02:04 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	adamiens("adamiens", 1);
	Bureaucrat	mbabo("mbabo", 50);
	Bureaucrat	ltruchel("ltruchel", 145);
	AForm*	firstForm = new ShrubberyCreationForm("julemart");
	AForm*	secondForm = new RobotomyRequestForm("averdon");
	AForm*	thirdForm = new PresidentialPardonForm("thellego");

	std::cout << "----------------------------" << std::endl;
	adamiens.signForm(*firstForm);
	adamiens.execute(*firstForm);
	mbabo.signForm(*firstForm);
	mbabo.execute(*firstForm);
	ltruchel.signForm(*firstForm);
	ltruchel.execute(*firstForm);

	std::cout << "----------------------------" << std::endl;
	adamiens.signForm(*secondForm);
	adamiens.execute(*secondForm);
	mbabo.signForm(*secondForm);
	mbabo.execute(*secondForm);
	ltruchel.signForm(*secondForm);
	ltruchel.execute(*secondForm);

	std::cout << "----------------------------" << std::endl;
	adamiens.signForm(*thirdForm);
	adamiens.execute(*thirdForm);
	mbabo.signForm(*thirdForm);
	mbabo.execute(*thirdForm);
	ltruchel.signForm(*thirdForm);
	ltruchel.execute(*thirdForm);

	std::cout << "----------------------------" << std::endl;
	delete firstForm;
	delete secondForm;
	delete thirdForm;
	return (0);
}
