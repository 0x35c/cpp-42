/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:39:45 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 17:07:43 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	ltruchel("ltruchel", 150);
	Bureaucrat	mbabo("mbabo", 50);
	Bureaucrat	adamiens("adamiens", 1);
	Form		firstForm("First form", 50, 150);
	Form		secondForm("Second form", 20, 45);

	std::cout << "----------------------------" << std::endl;
	adamiens.signForm(firstForm);
	mbabo.signForm(firstForm);
	ltruchel.signForm(firstForm);

	std::cout << "----------------------------" << std::endl;
	adamiens.signForm(secondForm);
	mbabo.signForm(secondForm);
	ltruchel.signForm(secondForm);

	std::cout << "----------------------------" << std::endl;
	try
	{
		mbabo.incGrade();
		mbabo.incGrade();
		mbabo.incGrade();
		mbabo.incGrade();
		mbabo.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;	
	}
	mbabo.signForm(secondForm);
	std::cout << "----------------------------" << std::endl;
	return (0);
}
