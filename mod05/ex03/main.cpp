/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:39:45 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/22 09:48:52 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	adamiens("adamiens", 1);
	Bureaucrat	mbabo("mbabo", 50);
	Bureaucrat	ltruchel("ltruchel", 145);
	Intern		cchauvet;

	std::cout << "----------------------------" << std::endl;
	AForm*	invalidForm = cchauvet.makeForm("not a form", "alouis-j");
	if (invalidForm != NULL)
	{
		adamiens.signForm(*invalidForm);
		adamiens.execute(*invalidForm);
		mbabo.signForm(*invalidForm);
		mbabo.execute(*invalidForm);
		ltruchel.signForm(*invalidForm);
		ltruchel.execute(*invalidForm);
	}
	else
		std::cout << "Invalid form name" << std::endl;

	std::cout << "----------------------------" << std::endl;
	AForm*	firstForm = cchauvet.makeForm("shrubbery creation", "julemart");
	if (firstForm != NULL)
	{
		adamiens.signForm(*firstForm);
		adamiens.execute(*firstForm);
		mbabo.signForm(*firstForm);
		mbabo.execute(*firstForm);
		ltruchel.signForm(*firstForm);
		ltruchel.execute(*firstForm);
	}

	std::cout << "----------------------------" << std::endl;
	AForm*	secondForm = cchauvet.makeForm("robotomy request", "averdon");
	if (secondForm != NULL)
	{
		adamiens.signForm(*secondForm);
		adamiens.execute(*secondForm);
		mbabo.signForm(*secondForm);
		mbabo.execute(*secondForm);
		ltruchel.signForm(*secondForm);
		ltruchel.execute(*secondForm);
	}
	else
		std::cout << "Invalid form name" << std::endl;

	std::cout << "----------------------------" << std::endl;
	AForm*	thirdForm = cchauvet.makeForm("presidential pardon", "thellego");
	if (thirdForm != NULL)
	{
		adamiens.signForm(*thirdForm);
		adamiens.execute(*thirdForm);
		mbabo.signForm(*thirdForm);
		mbabo.execute(*thirdForm);
		ltruchel.signForm(*thirdForm);
		ltruchel.execute(*thirdForm);
	}
	else
		std::cout << "Invalid form name" << std::endl;

	std::cout << "----------------------------" << std::endl;
	delete firstForm;
	delete secondForm;
	delete thirdForm;
	return (0);
}
